import string
s1=input("Enter the string : ")
s2=""
for i in s1:
    if i not in string.punctuation:
        s2+=i
print(s2)