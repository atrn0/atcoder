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
    n, k = list(map(int, input().split()))
    h = list(map(int, input().split()))
    h.sort(reverse=True)
    print(sum(h[k:]))


if __name__ == '__main__':
    main()
