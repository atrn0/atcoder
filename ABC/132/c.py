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
    n = int(input())
    d = list(map(int, input().split()))

    d.sort()
    if d[int(n/2-1)] == d[int(n/2)]:
        print(0)
        return
    print(d[int(n/2)]-d[int(n/2-1)])


if __name__ == '__main__':
    main()
