d = {}
n = int(input("Enter the number of values : "))
for i in range(n):
    key = int(input("Enter the key : "))
    value = int(input("Enter the value : "))
    d[key] = value
print(len(d))
