#!/bin/bash
wget -p .. https://raw.githubusercontent.com/iamwairimu/alx-low_level_programming/master/0x18-dynamic_libraries/101-make_me_win.so
export LD_PRELOAD="$PWD/../101-make_me_win.so"
