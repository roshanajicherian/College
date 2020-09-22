s1 = input("Enter the first string : ")
s2 = input("Enter the second string : ")
length = len(s1)//2
newString = s1[:length]+s2+s1[length+1:]
print(newString)
