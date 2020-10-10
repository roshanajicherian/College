d = {}
n = int(input("Enter the number of values to be inserted in the dictionary : "))
while n:
    key = int(input("Enter the key : "))
    value = int(input("Enter the value : "))
    d[key] = value
    n = n-1
print("The dictionary is  : ", d)

if len(d) == 0:
    print("Dictionary is empty")
else:
    print("Dictionary is not empty")
