n = int(input())
h = list(map(int, input().split()))

# 4 5 6 0 3 8 7 4 0 0 3 7 0 0 0 32


def lands(l):
    l += [0]
    lands = 0
    for i in range(len(l)):
        if l[i] == 0 and l[i-1] != 0:
            lands += 1
    return lands


def r(h, c):
    c += lands(h)
    # print(c)
    h = list(map(lambda x: x - 1 if x != 0 else 0, h))
    if h == [0] * len(h):
        print(c)
    else:
        r(h, c)


r(h, 0)
