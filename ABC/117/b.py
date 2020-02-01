input()
l = list(map(int, input().split()))

if max(l) * 2 < sum(l):
    print('Yes')
else:
    print('No')
