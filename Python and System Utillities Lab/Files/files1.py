# Write a Python program to print the attributes (name and mode)
# of a file.
with open("sampleTextFile.txt","r") as f:
    print(f"File Name : {f.name}\nFile Mode : {f.mode}\nFile Poninter Position : {f.tell()}\nIs FileClosed : {f.closed}")