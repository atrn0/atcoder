n=int(input())
pt=px=py=0
result=1
for i in range(n):
    t, x, y=map(int, input().split())
    if (pt-t+px-x+py-y)%2==1 or abs(px-x)+abs(py-y)>t-pt:
        result=0
        for j in range(n-i-1):
            input()
        break
    pt, px, py=t, x, y
print(('No', 'Yes')[result])
