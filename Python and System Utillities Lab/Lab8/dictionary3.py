d = {}
n = int(input("Enter the number of values to be inserted in the dictionary : "))
for i in range(n):
    key = int(input("Enter the key : "))
    value = int(input("Enter the value : "))
    d[key] = value
print("The dictionary before sorting : ", d)
descendingDictionary = sorted(d.items(), key=lambda x: x[1], reverse=True)
asscendingDictionary = sorted(d.items(), key=lambda x: x[1])

print("Dictionary in descending order : ", descendingDictionary)
print("Dictionary in ascending order : ", asscendingDictionary)
