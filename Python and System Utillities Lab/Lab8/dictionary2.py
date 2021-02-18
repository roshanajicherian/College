d1={}
x=int(input("Enter number of key value pairs : "))
for i in range(x):
    key=input("Key : ")
    value=input("Value : ")
    d1[key]=value
key=input("Enter key to be searched : ")
if key.isdigit():
    key=int(key)
if key in d1.keys():
    print("Yes")
else: 
    print("No")