n = int(input("Enter the number of element in the tuple : "))
l = []
for i in range(n):
    x = int(input())
    l.append(x)
tuple1 = tuple(l)
print(tuple1)
x = int(input("Enter the value to be searched for : "))
j = 0
for i in tuple1:
    if i == x:
        print("Element found at index {}".format(j))
    j += 1
