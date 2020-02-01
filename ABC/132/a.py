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
    # a, b = map(int, input().split())

    s = input()

    for i in s:
        if s.count(i) != 2:
            print('No')
            return

    print('Yes')


if __name__ == '__main__':
    main()
