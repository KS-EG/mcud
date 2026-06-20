#!/bin/bash

set -e

rm -rf build

echo "Building algorithm..."

mkdir -p build
cd build

cmake ..
make -j$(nproc)

echo "MCUD build done"