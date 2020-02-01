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
    ans = 2018
    l, r = list(map(int, input().split()))
    for i in range(l, min(l+2019, r)):
        for j in range(i+1, min(l+2019, r)+1):
            ans = min(ans, i*j % 2019)
    print(ans)


if __name__ == '__main__':
    main()
