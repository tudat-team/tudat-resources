#!/usr/bin/env bash

rm -rf build
mkdir build

cd build

cmake \
    -DCMAKE_CXX_STANDARD=14 \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_INSTALL_PREFIX=$PREFIX \
    -DCMAKE_PREFIX_PATH=$PREFIX \
    -DPREFIX=$PREFIX \
    ..

make -j2

ctest --verbose

rm -rf build
