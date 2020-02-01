import itertools

n=int(input())
l=list(map(int, input().split()))


for i in itertools.combinations(list(range(n)), 3):
    a=[l[0:i[0]+1], l[i[0]+1:]]
