d = {}
n = int(input("Enter the number of values to be inserted in the dictionary : "))
for i in range(n):
    key = int(input("Enter the key : "))
    value = int(input("Enter the value : "))
    d[key] = value
x = int(input("Enter the key-value to be searched for : "))
if x in d.keys():
    print("The key is present in the dictionary")
else:
    print("The key is not present in the dictionary")
