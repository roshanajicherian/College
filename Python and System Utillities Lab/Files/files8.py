# Write a Python program to merge two files
with open("sampleTextFile3.txt","w") as wf:
    with open("sampleTextFile.txt","r") as rf1:
        textContent=rf1.read()
        wf.write(textContent)
    with open("sampleTextFile2.txt","r") as rf2:
        textContent=rf2.read()
        wf.write(textContent)
with open("sampleTextFile3.txt","r") as f:
    print(f.read())