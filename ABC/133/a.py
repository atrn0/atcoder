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
    n, a, b = list(map(int, input().split()))

    print(min(n*a, b))


if __name__ == '__main__':
    main()
