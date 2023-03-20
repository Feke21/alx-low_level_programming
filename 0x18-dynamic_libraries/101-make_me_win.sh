#!/bin/bash
wget -P ../ https://github.com/Feke21/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libalx.so
export LD_PRELOAD=../libalx.so
