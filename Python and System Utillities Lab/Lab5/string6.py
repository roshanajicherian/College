s = input("Enter the string : ")
sList = s.split(" ")
count = 0
for i in sList:
    if i == 'wood':
        count += 1
print(count)
