#!/bin/bash

# Get the terminal device name
TERMINAL=$(tty)

# Check if the terminal is /dev/ttyPS0
if [ "$TERMINAL" = "/dev/ttyPS0" ]; then
  /usr/bin/delilah
fi
