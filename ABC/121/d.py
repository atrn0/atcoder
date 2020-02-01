def f(n):
    if int((n+1) / 2) % 2 == 0:
        return n
    else:
        return 1 ^ n


a, b = map(int, input().split())

print(f(a-1) ^ f(b))
