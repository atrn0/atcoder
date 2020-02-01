n, m = map(int, input().split())
l = list(map(int, input().split()))

l.sort(reverse=True)
# print(l)

d = list(map(lambda x: l[x] - l[x + 1], range(m - 1)))
d.sort(reverse=True)

# print(l, d)

x = l[0]-l[-1]-sum(d[:n-1])

# print(l[0]-l[-1])
print(x)
