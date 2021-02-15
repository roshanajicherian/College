# Write a Python program to read and print a n X m matrix using
# for loop
rows=int(input("Entet the number of rows : "))
columns=int(input("Enter the number of columns : "))
matrix=[[0 for i in range(columns)]for j in range(rows)]
print("Enter the matrix : ")
for i in range(rows):
    for j in range(columns):
        matrix[i][j]=int(input())
print("The matrix is : ")
for i in range(rows):
    for j in range(columns):
        print(f"{matrix[i][j]}",end=" ")
    print("\n")