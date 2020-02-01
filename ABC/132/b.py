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
    p = list(map(int, input().split()))

    count = 0
    for i in range(1, n-1):
        if max(p[i-1:i+2]) > p[i] and min(p[i-1:i+2]) < p[i]:
            # print(i)
            count += 1

    print(count)


if __name__ == '__main__':
    main()
