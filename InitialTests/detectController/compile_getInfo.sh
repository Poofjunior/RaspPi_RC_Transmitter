#!/bin/bash

# The easiest way to compile is by using the output of the sdl-config command
# with the --cflags and --libs arguments.  
g++ getInfo.cpp -o getInfo `sdl-config --cflags --libs`
