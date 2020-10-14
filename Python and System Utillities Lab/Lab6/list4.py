l = []
n = int(input("Enter the number of elements in the list : "))
for i in range(0, n):
    x = int(input())
    l.append(x)
low = int(input("Enter the lower index : "))
high = int(input("Enter the higher index : "))
print(l[low:high+1])
