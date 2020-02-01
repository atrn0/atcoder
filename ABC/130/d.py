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
    n, k = map(int, input().split())
    a = list(map(int, input().split()))

    cursum = 0
    l = 0
    ans = 0
    for r in range(n):
        cursum += a[r]
        while cursum >= k:
            # print(a[l:r+1])
            ans += n - r
            cursum -= a[l]
            l += 1

    print(ans)


if __name__ == '__main__':
    main()
