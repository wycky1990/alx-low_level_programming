#!/bin/bash
wget -P /tmp https://github.com/wycky1990/alx-low_level_programming/raw/master/0x09-dynamic_libraries/putshack.so
export LD_PRELOAD=/tmp/putshack.so
