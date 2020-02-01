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
    h, n = list(map(int, input().split()))
    a = list(map(int, input().split()))
    if sum(a) >= h:
        print("Yes")
    else:
        print("No")


if __name__ == '__main__':
    main()
