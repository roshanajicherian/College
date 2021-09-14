def transposeMatrix(matrix,rows,columns):
    result = [[0 for i in range(columns)] for j in range(rows)]
    for i in range(rows):
        for j in range(columns):
            result[j][i] = matrix[i][j]
    print("The matrix is : ", result)

rows = int(input("Enter the rows : "))
columns = int(input("Enter the columns : "))
matrix = [[0 for i in range(columns)] for j in range(rows)]
print("Enter the matrix : ")
for i in range(rows):
    for j in range(columns):
        matrix[i][j] = int(input())
transposeMatrix(matrix,rows,columns)