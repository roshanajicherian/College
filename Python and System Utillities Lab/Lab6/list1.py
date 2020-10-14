n = int(input("Enter the number of elements in the list : "))
l = []
frequencyList = [0 for i in range(100)]
for i in range(0, n):
    x = int(input())
    l.append(x)
    frequencyList[x] += 1
j = 0
print("The frequency of each element in the list is : ")
for i in frequencyList:
    if i != 0:
        print("{} : {}".format(j, i))
    j += 1
