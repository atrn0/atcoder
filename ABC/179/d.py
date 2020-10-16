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

dp = []


# def count(n, s):
#     global memo
#     r = 0
#     for i in s:
#         if i > n:
#             break
#         if i == n:
#             r += 1
#         else:
#             if memo[n - i] == -1:
#                 memo[n - i] = count(n - i, s)
#                 print(memo[n-i])
#             r += memo[n - i]
#     return r % 998244353


def main():
    global dp
    n, k = map(int, input().split())
    dp = [1] + [0] * n
    s = set()
    for i in range(k):
        l, r = map(int, input().split())
        for j in range(l, r + 1):
            s.add(j)

    for i in range(n):
        for j in s:
            if i + j > n - 2:
                break
            dp[i + j] += dp[i]
        print(dp)


if __name__ == '__main__':
    main()
