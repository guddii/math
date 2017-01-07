# Math Sources
A c++ project for two dimensional vectors and matrices

[![Build Status](https://travis-ci.org/guddii/math.svg?branch=master)](https://travis-ci.org/guddii/math)


## Getting started
This file can be compiled with `clang`:
```
#!/usr/bin/env bash
clang++ matrix.cpp -c -o matrix.o
clang++ vector.cpp -c -o vector.o
clang++ main.cpp matrix.o vector.o -o math
```

Build verified with:
```
Apple LLVM version 8.0.0 (clang-800.0.42.1)
Target: x86_64-apple-darwin16.3.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin
```