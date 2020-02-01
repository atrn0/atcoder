# 500:a, 100:b, 50:c
a, b, c, x = [int(input()) for i in range(4)]
pattern = 0

for na in range(a+1):
    ra = 500*na
    if ra > x: break
    for nb in range(b+1):
        rb = 100*nb
        if ra + rb > x:
            break
        elif ra + rb + 50*c >= x:
            pattern += 1

print(pattern)
