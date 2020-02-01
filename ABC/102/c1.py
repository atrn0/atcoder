import math, statistics
n=int(input())
l=list(map(int, input().split()))
for i in range(n):
    l[i]-=(i+1)
b=statistics.median(l)
sad=0
for i in l:
    sad+=abs(i-b)
print(int(sad))
