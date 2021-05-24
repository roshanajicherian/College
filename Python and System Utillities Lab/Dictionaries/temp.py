print("Enter the dimensions of the matrix in rows x columns format")
rowval = int(input())
columnval = int(input())
templist = []
finallist = []
print("Enter the elements of the matrix:")
for rows in range(rowval):
    print(f"Enter elements of row {rows+1}")
    for columns in range(columnval):
        templist.append(input())
    finallist.append(templist)
    templist.clear()
print("The inputted matrix is: ")
for rows in finallist:
    print(rows)