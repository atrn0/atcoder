import itertools
n, m=map(int, input().split())
l=[]
for i in range(n):
    l.append(list(map(int, input().split())))
for element in itertools.combinations(l, m):
        
