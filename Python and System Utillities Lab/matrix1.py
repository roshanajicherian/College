rows = 5
columns = 5
matrix = [[0 for i in range(columns)] for j in range(rows)]
for i in range(rows):
    for j in range(columns):
        matrix[i][j] = int(input())

print(matrix)
# Printing fourth row elements
print("The fourth row element are :\n")
print(matrix[3])
# Print third column elements
print("The third column elements are : \n")
for i in range(rows):
    print(matrix[i][2])