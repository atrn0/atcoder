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


def ans(i):
    if i % 2 == 0:
        return s-sre[int((n-i-1)/2)]*2-slo[int(i/2)]*2
    return s-sro[int((n-i)/2)]*2-sle[int((i-1)/2)]*2


n = int(input())
a = list(map(int, input().split()))

s = sum(a)
sle = [0]
sre = [0]
slo = [0]
sro = [0]
for i in range(n):
    if i % 2 == 0:
        slo.append(slo[-1]+a[i])
        sro.append(sro[-1]+a[-i-1])
    else:
        sle.append(sle[-1]+a[i])
        sre.append(sre[-1]+a[-i-1])
print(' '.join(map(str, [ans(i) for i in range(n)])))
