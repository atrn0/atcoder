n, m = map(int, input().split())
nop = [0]*m

for i in range(n):
    l = list(map(int, input().split()))
    # print(l)
    for j in range(l[0]):
        nop[l[j+1]-1] += 1

# print(nop, n)

print(nop.count(n))
