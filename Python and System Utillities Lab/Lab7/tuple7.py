n = int(input("Enter the number of element in the tuple : "))
l = []
for i in range(n):
    x = int(input())
    l.append(x)
tuple1 = tuple(l)
sum = 0
for i in tuple1:
    sum += i
print(sum)
