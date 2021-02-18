d1={}
x=int(input("Enter number of key value pairs : "))
for i in range(x):
    key=input()
    value=input()
    d1[key]=value
print(d1.items())