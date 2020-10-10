
d = {}
n = int(input("Enter the number of values to be inserted in the dictionary : "))
while n:
    key = int(input("Enter the key : "))
    value = int(input("Enter the value : "))
    d[key] = value
    n = n-1
print("The dictionary is : ", d)

maxKey = max(d, key=d.get)
minKey = min(d, key=d.get)
print("Key holding max value : ", maxKey)
print("Key holding min value : ", minKey)
