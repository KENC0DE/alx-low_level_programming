#!/bin/bash
wget -P ../ https://github.com/KENC0DE/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD=../libhack.so
