Write a Python program to read all lines in an input file
with open("sampleTextFile.txt","w") as f:
    a=input("Enter data : ")
    f.write(a+"\n")