# Write a Python program to change the content of a file to
# uppercase letters
with open("sampleTextFile.txt","r+") as f:
    textContent= f.read()
    textContent=textContent.upper()
    f.seek(0)
    f.write(textContent)
    f.seek(0)
    print(f.readlines())