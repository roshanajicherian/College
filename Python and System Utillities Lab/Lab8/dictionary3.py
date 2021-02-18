d = {}
n = int(input("Enter the number of values : "))
for i in range(n):
    key = int(input("Key : "))
    value = int(input("Value : "))
    d[key] = value
# print("The dictionary before sorting : ", d)
# descendingDictionary = sorted(d.items(), key=lambda x: x[1], reverse=True)
asscendingDictionary = sorted(d.items(), key=lambda x: x[1])

# print("Dictionary in descending order : ", descendingDictionary)
print("Dictionary in ascending order : ", asscendingDictionary)
