
d1 = {}
d2 = {}

n = int(input("Enter the number of values to be inserted in the dictionary 1 : "))
while n:
    key = int(input("Enter the key : "))
    value = int(input("Enter the value : "))
    d1[key] = value
    n = n-1
n = int(input("Enter the number of values to be inserted in the dictionary 2 : "))
while n:
    key = int(input("Enter the key : "))
    value = int(input("Enter the value : "))
    d1[key] = value
    n = n-1

d2.update(d1)
print(d2)
