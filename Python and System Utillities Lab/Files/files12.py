with open("sampleTextFile.txt","r") as f1:
    textConent1=f1.read()
with open("sampleTextFile2.txt","r") as f2:
    textConent2=f2.read()
if textConent1==textConent2:
    print("The files are identical.")
else:
    print("The files are different.")