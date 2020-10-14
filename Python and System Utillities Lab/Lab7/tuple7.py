n = int(input("Enter the number of element in the tuple : "))
tuple1 = (int(input()) for i in range(n))
print(tuple1)
sum = 0
for i in tuple1:
    sum += i
print(sum)
