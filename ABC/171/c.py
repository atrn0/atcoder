import math
import string
import itertools
import fractions
import heapq
import collections
import re
import array
import bisect
import sys
import random
import time
import copy
inf = 10**9


def main():
    n = int(input()) - 1
    l = []
    while True:
        m = int(n % 26)
        l.append(chr(m+97))
        n = (n - m)/26-1
        if n < 0:
            break
    l.reverse()
    print(''.join(l))


if __name__ == '__main__':
    main()
