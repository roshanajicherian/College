# Write a Python program to display the size of a file
with open("sampleTextFile.txt","r") as f:
    f.seek(0,2)
    print(f.tell())
