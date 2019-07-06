#!/bin/bash
make -B -C ./pascal
cp simtest.py /usr/bin/yast_test
cp pascal/pascal /usr/bin/yast_gen_pas
