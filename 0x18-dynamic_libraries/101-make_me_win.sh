#!/bin/bash
wget -P ../ https://github.com/KENC0DE/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libfake.so
export LD_PRELOAD=../libfake.so
