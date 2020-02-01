import math

k, a, b = map(int, input().split())

if b - a > 1 or k <= a:
    x = a + (b - a) * (k - a) // 2 + 1 if (k - a +
                                           1) % 2 == 1 else a + (b - a) * (k - a + 1) // 2
else:
    x = 1 + k

print(x)
# print(int(x))
# なんかずれる
