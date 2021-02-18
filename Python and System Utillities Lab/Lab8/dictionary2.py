d1={'First Name': 'Roshan','Last Name': 'Aji Cherian','College':'GECBH',2:10}
key=input()
if key.isdigit():
    key=int(key)
print(d1)
if key in d1.keys():
    print("Yes")
else: 
    print("No")