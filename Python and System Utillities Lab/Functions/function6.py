def pascalTrinagle(n):
	result=[[0 for i in range(n)]for j in range(n)]
	for i in range(0,n):
		for j in range(0,i+1):
			if (j is 0 or j is i):
				result[i][j]=1
				print(result[i][j],end=" ")
			else:
				result[i][j]=(result[i-1][j-1]+result[i-1][j])
				print(result[i][j],end=" ")
		print()
pascalTrinagle(5)