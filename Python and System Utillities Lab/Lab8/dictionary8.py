d = {}
n = int(input("Enter the number of values to be inserted in the dictionary : "))
for i in range(n):
    key = int(input("Key : "))
    value = int(input("Value : "))
    d[key] = value
print("The dictionary is : ", d)

temp = []
res = dict()

for key, value in d.items():
    if value not in temp:
        temp.append(value)
        res[key] = value
print("The dictionary after removing duplicate values ", res)
