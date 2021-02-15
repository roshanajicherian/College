# Write a Python program to write and read the data in the input
# file
with open("sampleTextFile.txt","r+") as f:
    a=input("Enter data : ")
    f.write(a+"\n")
    f.seek(0)
    print(f.readlines())
