import itertools

n, y=map(int, input().split())
seq=[i for i in range(n+2)]
result=[-1, -1, -1]
for i in itertools.combinations(seq, 2):
    hideyo, ichiyo, yukichi=i[0], i[1]-i[0]-1, n+1-i[1]
    if 1000*hideyo+5000*ichiyo+10000*yukichi==y:
        result=[yukichi, ichiyo, hideyo]
        break
print(*result)
