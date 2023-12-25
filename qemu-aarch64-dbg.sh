#!/bin/bash

qemu-system-aarch64 -cpu cortex-a53 -nographic \
    -machine virt,virtualization=on,gic-version=3 \
    -net none -chardev stdio,id=con,mux=on -serial chardev:con \
    -mon chardev=con,mode=readline -kernel ./nuttx \
    -S -s