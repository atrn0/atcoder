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
    n = int(input())
    a = list(map(int, input().split()))
    q = int(input())

    ad = {}

    for e in a:
        if e in ad:
            ad[e] += 1
        else:
            ad[e] = 1

    s = sum(a)
    for i in range(q):
        b, c = map(int, input().split())
        if b in ad:
            s += ad[b] * (c - b)
            if c in ad:
                ad[c] += ad.pop(b)
            else:
                ad[c] = ad.pop(b)
        print(s)


if __name__ == '__main__':
    main()
