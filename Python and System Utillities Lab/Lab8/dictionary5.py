d1 = {}
d2 = {}

n = int(input("Enter the number of values to be inserted in the dictionary 1 : "))
for i in range(n):
    key = int(input("Enter the key : "))
    value = int(input("Enter the value : "))
    d1[key] = value
n = int(input("Enter the number of values to be inserted in the dictionary 2 : "))
for i in range(n):
    key = int(input("Enter the key : "))
    value = int(input("Enter the value : "))
    d1[key] = value
if d1 == d2:
    print('The dictionaries are same')
else:
    print("The dictionaries are not equal")
