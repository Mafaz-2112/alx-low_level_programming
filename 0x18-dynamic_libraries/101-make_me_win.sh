#!/bin/bash
wget -p /tmp  https://github.com/mafaz-2112/alx-low_level_programming/main/0x18-dynamic_libraries/lipgiga.so
export LD_PRELOAD=/tmp/lipgiga.so
