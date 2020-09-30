rows = 2
columns = 2
matrix = [[0 for i in range(columns)] for j in range(rows)]
print("Enter the matrix : ")
for i in range(rows):
    for j in range(columns):
        matrix[i][j] = int(input())
print("the diagonal elements of the matrix are : ")
for i in range(rows):
    print(matrix[i][i])
