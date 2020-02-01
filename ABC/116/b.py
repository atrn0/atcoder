s = int(input())

# 8 4 2 1 4 2 1 4
# 7 22 11 34 17
a = set()


def f(n):
    return n // 2 if n % 2 == 0 else 3 * n + 1


def r(s):
    if s in a:
        print(len(a) + 1)
    else:
        a.add(s)
        s = f(s)
        r(s)


r(s)
