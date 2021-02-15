# Write a Python program to serialize and de-serialize multiple
# objects
import pickle as pk
location=['Mumbai','Hyderabad','Banglore','Kerala','Delhi']
with open("pickleFile.pkl","wb") as f:
    pk.dump(location,f)
with open("pickleFile.pkl","rb") as f:
    data1=pk.load(f)
print(data1)