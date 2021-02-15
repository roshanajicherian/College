# Write a Python program to read two n X m matrices and print
# their sum.
def matrixInput(r,c):
    matrix=[[0 for i in range(c)]for j in range(r)]
    print("Enter the matrix : ")
    for i in range(r):
        for j in range(c):
            matrix[i][j]=int(input())
    return matrix

def matrixOutput(matrix,r,c):
    for i in range(r):
        for j in range(c):
            print(f"{matrix[i][j]}",end=" ")
        print("\n")

def subtractTwoMatrices(matrix1,matrix2,r1,c1,r2,c2):
    if r1==r2 and c1==c2:
        matrix3=[[0 for i in range(c1)]for j in range(r1)]
        for i in range(r1):
            for j in range(r2):
                matrix3[i][j]=matrix1[i][j]-matrix2[i][j]
        matrixOutput(matrix3,r1,c1)
    else:
        print("Rows and Columns not equal!!")
        return
    
row1=int(input("Enter the number of rows : "))
col1=int(input("Enter the number of columns : "))
matrix1=matrixInput(row1,col1)
row2=int(input("Enter the number of rows : "))
col2=int(input("Enter the number of columns : "))
matrix2=matrixInput(row2,col2)
subtractTwoMatrices(matrix1,matrix2,row1,col1,row2,col2)

