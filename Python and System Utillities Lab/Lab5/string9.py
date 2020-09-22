s=input("Enter the string : ")
count=0
sList = s.split()
for idx in sList:
    if any(chr.isalpha() for chr in idx) and any(chr.isdigit() for chr in idx):
        count+=1
print("Words with alphabets and numbers : ", str(count))
