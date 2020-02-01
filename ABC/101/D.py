import math

for i in range(int(input())):
    print(int(str(i%9+1)+'9'*math.floor(i/9)))
