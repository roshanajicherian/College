d1={}
x=int(input("Enter number of key value pairs : "))
for i in range(x):
    key=input("Key : ")
    value=input("Value : ")
    d1[key]=value
for key,value in d1.items():
    print(key,value)
