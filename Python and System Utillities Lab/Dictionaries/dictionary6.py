d = {}
n = int(input("Enter the number of values to be inserted in the dictionary : "))
while n:
    key = int(input("Enter the key : "))
    value = int(input("Enter the value : "))
    d[key] = value
    n = n-1
print("The dictionary is : ", d)

temp = []
res = dict()

for key, value in d.items():
    if value not in temp:
        temp.append(value)
        res[key] = value
print("The dictionary after removing duplicate values ", res)
