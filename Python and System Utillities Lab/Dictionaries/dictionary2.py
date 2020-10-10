# Python script to check if a given key already exists in the ditionary

d = {}
n = int(input("Enter the number of values to be inserted in the dictionary : "))
while n:
    key = int(input("Enter the key : "))
    value = int(input("Enter the value : "))
    d[key] = value
    n = n-1
print("The dictionary is : ", d)
key = int(input(key, "Enter the key to be searched for : "))

keyFound = False
for i in d.keys():
    if i == key:
        print("The key is already present in the dictionary")
        keyFound = True
if keyFound == False:
    print("The key is not present in the dictionary")
