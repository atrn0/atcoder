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
inf = 10**9


def main():
    n, x = map(int, input().split())
    l = list(map(int, input().split()))

    d = 0
    c = 1
    for i in range(n):
        d += l[i]
        if d > x:
            break
        c += 1

    print(c)


if __name__ == '__main__':
    main()
