for i in range(1900, 2100):
    print(i, sum(list(map(int, list(str(i))))), i/sum(list(map(int, list(str(i))))))
