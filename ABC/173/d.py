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
    a = sorted(map(int, input().split()), reverse=True)
    r = 0
    q = [a[0]]
    next = 0
    for i in a[1:]:
        q.append(i)
        q.append(i)
        # print(q)
        r += q[next]
        next += 1
    print(r)


if __name__ == '__main__':
    main()
