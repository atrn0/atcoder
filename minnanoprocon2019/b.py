noc = [0] * 4

for i in range(3):
    l = list(map(int, input().split()))
    for j in range(2):
        noc[l[j] - 1] += 1

if 3 in noc:
    print('NO')
else:
    print('YES')
