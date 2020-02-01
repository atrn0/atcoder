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


def dist(a, b):
    sum = 0
    for i in range(len(a)):
        sum += (a[i]-b[i])**2
    return sum**(1/2)


def main():
    n, d = list(map(int, input().split()))
    x = [[] for i in range(n)]

    for i in range(n):
        x[i] = list(map(int, input().split()))
    count = 0
    for i in range(n-1):
        for j in range(i+1, n):
            dis = dist(x[i], x[j])
            # print(dis, math.floor(dis))
            if dis == math.floor(dis):
                count += 1

    print(count)


if __name__ == '__main__':
    main()
