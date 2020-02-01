n, a, b = map(int, input().split())

su = 0

for i in range(1, n+1):
    s = sum(list(map(int, list(str(i)))))
    if a <= s and s <= b:
        su += i


print(su)
