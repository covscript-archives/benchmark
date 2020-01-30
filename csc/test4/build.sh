#!/bin/bash
g++ --shared -fPIC -O3 -std=c++14 -I /covscript/include/ test4.cpp -o test4.cse -lcovscript