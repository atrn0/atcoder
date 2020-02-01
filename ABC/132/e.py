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
    connectTo = [[] for i in range(n+1)]
    for i in range(m):
        u, v = map(int, input().split())
        connectTo[u].append(v)

    s, t = map(int, input().split())
    connect3To = [set() for i in range(n+1)]
    for i in range(1, n+1):
        for l in connectTo[i]:
            for k in connectTo[l]:
                for j in connectTo[k]:
                    connect3To[i].add(j)

    d = [100000000000 for i in range(n+1)]
    a = []
    d[s] = 0
    a.append(s)
    while(True):
        if a == []:
            print(-1)
            return
        v = a.pop(0)
        if v == t:
            break
        for w in connect3To[v]:
            if d[w] == 100000000000:
                d[w] = d[v]+1
                a.append(w)
                a.sort(key=lambda x: d[x])
            elif d[w] > d[v]+1:
                d[w] = d[v]+1
    print(d[t])


if __name__ == '__main__':
    main()
