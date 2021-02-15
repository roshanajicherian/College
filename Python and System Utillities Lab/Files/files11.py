def checkPalindrome(string1):
    string1=string1.strip()
    if string1==string1[::-1]:
        return True
    else:
        return False

with open("sampleTextFile.txt","r") as f:
    textContent=f.readline()
    while len(textContent)>0:
        if checkPalindrome(textContent):
            print(textContent,end="")
        textContent=f.readline()
