#!/usr/bin/env python3

from math import sin, pi
from os import mkdir, path

if not path.isdir('./tables'):
    mkdir('./tables')
testSineTable = open('./tables/testSine.inc', 'w')
try:
    pi2 = pi * 2
    scale = ((2 ** 32) - 1) / 2  # 32 bits
    inc = pi2 / 1024  # 1024 elements
    theta = 0.0
    words = 0
    while (theta < pi2):
        testSineTable.write('    .4byte ' if words == 0 else ', ')
        testSineTable.write(str(int(
            scale * (sin(theta) + 1.0)
        )))
        words = words + 1
        if words == 4:
            testSineTable.write('\n')
            words = 0
        theta = theta + inc
    if words != 4:
        testSineTable.write('\n')
finally:
    testSineTable.close()
