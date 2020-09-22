s = input("Enter the string : ")
sList = s.split(" ")
print(sList)
count = 0
for i in sList:
    if i == 'wood':
        count += 1
print(count)
