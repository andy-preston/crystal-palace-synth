#!/usr/bin/env python3

from math import sin

testSineTable = open('./tables/testSine.inc', 'w')
try:
    pi2 = 3.1415 * 2
    size = 32 ** 2  # 32 bits
    inc = pi2 / 1024  # 1024 elements
    theta = 0.0
    while (theta < pi2):
        testSineTable.write(
            '    .4byte ' + str(int(size * sin(theta) + 1.0)) + '\n'
        )
        theta = theta + inc
finally:
    testSineTable.close()
