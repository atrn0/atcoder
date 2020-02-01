n=int(input())
l=list(map(int, input().split()))
a=sum(l)/4
s=[]
b=0
i=0
while True:
    if len(s)==3 or i==n-1:
        s.append(sum(l[i:]))
        break
    if b+l[i]<a or b==0:
        b+=l[i]
        # print(0, l[i])
        i+=1
    else:
        if a-b<b+l[i]-a:
            s.append(b)
            # print(1, b)
        else:
            s.append(b+l[i])
            # print(2, b+l[i])
            i+=1
        b=0

# print(s)
print(max(s)-min(s))
