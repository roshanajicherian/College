l = []
sum = 0
n = int(input("Enter the number of elements in the list : "))
for i in range(0, n):
    x = int(input())
    l.append(x)
    sum += x
print(sum)
