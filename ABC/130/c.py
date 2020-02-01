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
    w, h, x, y = map(int, input().split())

    print(w*h/2, 1 if w/2 == x and h/2 == y else 0)


if __name__ == '__main__':
    main()
