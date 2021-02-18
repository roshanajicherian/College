def printFloydTriangle(n):
    val = 1
    for i in range(n):
        for j in range(i):
            print(val, end=" ")
            val += 1
        print()

printFloydTriangle(int(input("Rows : ")))