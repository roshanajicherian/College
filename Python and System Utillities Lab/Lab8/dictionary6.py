
d1 = {}
d2 = {}

n = int(input("Enter the number of values in dictionary 1 : "))
for i in range(n):
    key = int(input("Key : "))
    value = int(input("Value : "))
    d1[key] = value
n = int(input("Enter the number of values in dictionary 2 : "))
for i in range(n):
    key = int(input("Key : "))
    value = int(input("Value : "))
    d1[key] = value

d3 = d1
d3.update(d2)
print(d3)
