n = int(input("Enter the number of element in the tuple : "))
tuple1 = (int(input()) for i in range(n))
print(tuple1)
x = int(input("Enter the value to be searched for : "))
j = 0
for i in tuple1:
    if i == x:
        print("Element found at index {}".format(j))
    j += 1
