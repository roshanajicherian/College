# Write a Python program to display each word of a file in reverse
# order
with open("sampleTextFile.txt","r") as f:
    textContent=f.readline()
    while(len(textContent)>0):
        print(textContent[::-1],end="")
        textContent=f.readline()