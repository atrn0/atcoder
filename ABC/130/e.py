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
    n, m = map(int, input().split())
    s = list(map(int, input().split()))
    t = list(map(int, input().split()))

    dp = [[1 for j in range(m+1)] for i in range(n+1)]

    for i in range(1, n+1):
        for j in range(1, m+1):
            dp[i][j] = dp[i - 1][j - 1] * 2 if s[i-1] == t[j-1] else dp[i][j - 1] + \
                dp[i - 1][j] - dp[i - 1][j - 1]

    print(dp[n][m])


if __name__ == '__main__':
    main()
