s = input("Enter the string : ")
newString = ""
for i in s:
    if i.islower():
        newString += i
for i in s:
    if i.isupper():
        newString += i
print(newString)
