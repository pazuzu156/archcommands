# Custom Commands

This little project is a collection of custom commands built in c++ (others if it calls for it in the future)

## Building

This project uses CMake to build it's code, so a working CMake install is needed. Any requirements will be listed in the [requirements](#requirements) section

Make a new directory to build under, and build with cmake, then run make

```
mkdir build
cd build
cmake ..
make
sudo make install
```

## Installing

If you wish to install the apps elsewhere besides cmake's default prefix, define it when running cmake

```cmake -DCMAKE_INSTALL_PREFIX=/newprefix ..```

### Arch

Just follow the instructions on the [arch branch](https://github.com/pazuzu156/archcommands/tree/arch)

## Requirements

* libcurl
