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


def combinations_count(n, r):
    if n < r:
        return 0
    return math.factorial(n) // (math.factorial(n - r) * math.factorial(r))


def main():
    n, k = map(int, input().split())

    for i in range(1, k+1):
        print((combinations_count(k-1, i-1) *
               combinations_count(n-k+1, i)) % (1000000007))


if __name__ == '__main__':
    main()
