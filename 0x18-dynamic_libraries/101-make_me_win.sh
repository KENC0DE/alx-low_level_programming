#!/bin/bash
wget -P ../ https://github.com/KENC0DE/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libfake.so
export LD_PRELOAD=../libfake.so
