#!/bin/bash
wget -P ../ https://github.com/KENC0DE/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libklib.so
export LD_RELOAD=../libklib.so
