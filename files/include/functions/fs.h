#ifndef DELILAH_FUNCTIONS_FS
#define DELILAH_FUNCTIONS_FS

#include "util/log.h"
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/mount.h>
#include <unistd.h>

#define DELILAH_FUNCTIONS_FS_MOUNT_OK 0x0
#define DELILAH_FUNCTIONS_FS_MOUNT_DEVICE_NOT_FOUND 0x1
#define DELILAH_FUNCTIONS_FS_MOUNT_MKDIR_FAILED 0x2
#define DELILAH_FUNCTIONS_FS_MOUNT_FAILED 0x3
#define DELILAH_FUNCTIONS_FS_UNMOUNT_FAILED 0x4

static uint8_t
delilah_functions_fs_mount(const char* nvme_handle, const char* mount_point, const char* fs_type)
{
  // Construct the device path using the provided NVME handle
  char nvme_device_path[50];
  snprintf(nvme_device_path, 50, "/dev/%s", nvme_handle);

  // Check if the device exists
  if (access(nvme_device_path, F_OK) == -1) {
    log_error("Device %s not found", nvme_device_path);
    return DELILAH_FUNCTIONS_FS_MOUNT_DEVICE_NOT_FOUND;
  }

  // Create the mount point if it doesn't exist
  if (mkdir(mount_point, 0755) == -1 && errno != EEXIST) {
    log_error("Creation of mountpoint %s for %s failed, error code: %d",
              mount_point, nvme_device_path, errno);
    return DELILAH_FUNCTIONS_FS_MOUNT_MKDIR_FAILED;
  }

  // Attempt to mount the file system
  if (mount(nvme_device_path, mount_point, fs_type, 0, NULL) == -1) {
    log_error("Mounting of %s failed, error code: %d", nvme_device_path, errno);
    return DELILAH_FUNCTIONS_FS_MOUNT_FAILED;
  }

  return DELILAH_FUNCTIONS_FS_MOUNT_OK;
}

// This function unmounts a previously mounted file system at the specified
// mount point. If successful, it returns DELILAH_FUNCTIONS_FS_UNMOUNT_OK. If
// the unmount fails, it returns DELILAH_FUNCTIONS_FS_UNMOUNT_FAILED.
static uint8_t
delilah_functions_fs_unmount(const char* mount_point)
{
  log_info("Unmounting %s", mount_point);

  // Attempt to unmount the file system
  if (umount(mount_point) == -1) {
    log_error("Unmounting of %s failed, error code: %d", mount_point, errno);
    return DELILAH_FUNCTIONS_FS_UNMOUNT_FAILED;
  }

  return DELILAH_FUNCTIONS_FS_MOUNT_OK;
}

#endif
