#!/bin/bash

# The easiest way to compile is by using the output of the sdl-config command
# with the --cflags and --libs arguments. 

g++ pollSticks.cpp -o pollSticks `sdl-config --cflags --libs`
