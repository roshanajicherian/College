# Write a Python program to read two matrices and print their
# product.
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

def matrixProduct(matrix1,matrix2,r1,c1,r2,c2):
    if(c1==r1):
        matrix3=[[0 for i in range(c1)]for j in range(r1)]
        r3=r1
        c3=c2
        for i in range(len(matrix1)):
            for j in range(len(matrix2[0])):
                for k in range(len(matrix2)):
                    matrix3[i][j]+=(matrix1[i][k]*matrix2[k][j])
        matrixOutput(matrix3,r3,c3)
    else:
        print("Matrix muliplication not posssible!!")
        return

row1=int(input("Enter the number of rows : "))
col1=int(input("Enter the number of columns : "))
matrix1=matrixInput(row1,col1)
row2=int(input("Enter the number of rows : "))
col2=int(input("Enter the number of columns : "))
matrix2=matrixInput(row2,col2)
matrixProduct(matrix1,matrix2,row1,col1,row2,col2)