from fractions import gcd
input()
l=list(map(int, input().split()))
g=l[0]
for i in l[1:]:
    g=gcd(i, g)
print(str(bin(g))[::-1].find('1'))
