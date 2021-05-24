# Write a Python program to find the product of two matrices
# (matrices explicitly given in program)
def matrixOutput(matrix,r,c):
    for i in range(r):
        for j in range(c):
            print(f"{matrix[i][j]}",end=" ")
        print("\n")

def matrixProduct(matrix1,matrix2,r1,c1,r2,c2):
    if(c1==r2):
        r3=r1
        c3=c2
        matrix3=[[0 for i in range(c3)]for j in range(r3)]
        for i in range(len(matrix1)):
            for j in range(len(matrix2[0])):
                for k in range(len(matrix2)):
                    matrix3[i][j]+=(matrix1[i][k]*matrix2[k][j])
        matrixOutput(matrix3,r3,c3)
    else:
        print("Matrix muliplication not posssible!!")
        return

matrix1=[[1,2],[3,4]]
row1=len(matrix1)
col1=len(matrix1[0])
matrix2=[[1,2],[3,4]]
row2=len(matrix2)
col2=len(matrix2[0])
matrixProduct(matrix1,matrix2,row1,col1,row2,col2)