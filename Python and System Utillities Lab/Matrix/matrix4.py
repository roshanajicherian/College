# Write a Python program to find the sum of two matrices
# (matrices explicitly given in program)
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

matrix1=[[1,2],[3,4]]
row1=len(matrix1)
col1=len(matrix1[0])
matrix2=[[10,11],[12,13]]
row2=len(matrix2)
col2=len(matrix2[0])
subtractTwoMatrices(matrix1,matrix2,row1,col1,row2,col2)