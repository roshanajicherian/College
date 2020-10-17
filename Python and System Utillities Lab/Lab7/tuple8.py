n = int(input("Enter the number of element in the tuple : "))
l = []
for i in range(n):
    x = int(input())
    l.append(x)
tuple1 = tuple(l)
print(tuple1)
print(sorted(tuple1))
