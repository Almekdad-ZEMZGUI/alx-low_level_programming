#!/bin/bash
wget -qP /tmp/ https://github.com/Almekdad-ZEMZGUI/alx-low_level_programming/raw/master/0x18-dynamic_libraries/mole.so
export LD_PRELOAD="/tmp/mole.so"
