n, m=map(int, input().split())
l=[]
max=0
for i in range(n):
    l.append(list(map(int, input().split())))
for i in range(n-2):
    for j in range(i+1, n-1):
        for k in range(j+1, n):
            s=abs(l[i][0]+l[j][0]+l[k][0])+abs(l[i][1]+l[j][1]+l[k][1])+abs(l[i][2]+l[j][2]+l[k][2])
            if s>max:
                max=s
                print(i, j, k)
                print(abs(l[i][0]+l[j][0]+l[k][0]),abs(l[i][1]+l[j][1]+l[k][1]),abs(l[i][2]+l[j][2]+l[k][2]))

print(max)
