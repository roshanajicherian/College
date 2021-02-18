n = int(input("Enter the number of elements : "))
l = []
for i in range(n):
    x = int(input())
    l.append(x)
tuple1 = tuple(l)
l = [0 for i in range(100)]
for i in tuple1:
    l[i] += 1
j = 0
for i in l:
    if i > 1:
        print(j,i)
    j += 1
