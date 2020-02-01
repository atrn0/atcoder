import math
n=int(input())
l=list(map(int, input().split()))
for i in range(n):
    l[i]-=(i+1)
avg=sum(l)/n
fb=math.floor(avg)
cb=math.ceil(avg)
sadf=sadc=0
for i in l:
    sadf+=abs(i-fb)
    sadc+=abs(i-cb)

sad=min(sadf, sadc)
print(sad)
