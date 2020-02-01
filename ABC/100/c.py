n=int(input())
l=list(map(int, input().split()))
c=0
def a(n, l):
    result=False
    num=0
    for i in range(n):
        if l[i]%2==0:
            result=True
            num=i
            break
    return result, num
while True:
    b=a(n, l)
    if b[0]:
        c+=1
        l=list(map(lambda x: x*3, l))
        l[b[1]]//=6
    else:
        break
print(c)
