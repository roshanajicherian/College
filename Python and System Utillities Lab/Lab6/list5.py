rows = int(input("Enter the rows : "))
columns = int(input("Enter the columns : "))
matrix1 = [[0 for i in range(columns)] for j in range(rows)]
print("Enter the first matrix : ")
for i in range(rows):
    for j in range(columns):
        matrix1[i][j] = int(input())
print("Enter the second matrix : ")
matrix2 = [[0 for i in range(columns)] for j in range(rows)]
for i in range(rows):
    for j in range(columns):
        matrix2[i][j] = int(input())
result = [[0 for i in range(columns)] for j in range(rows)]
for i in range(rows):
    for j in range(columns):
        result[i][j] = matrix1[i][j]+matrix2[i][j]
print("The sum is ")
for i in range(rows):
    for j in range(columns):
        print(result[i][j],end=" ")
    print()