n=int(input())
l=list(map(int, input().split()))
c=0
for i in range(n):
    a=l[i]
    while a%2==0:
        a//=2
        c+=1
print(c)
