# Write a Python program to read and write with a single file
# object
with open("sampleTextFile.txt","r+") as f:
    a=input("Enter data : ")
    f.write(a+"\n")
    f.seek(0)
    print(f.readlines())
