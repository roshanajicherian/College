str1 = input("Enter the string : ")
punctuations = '''!()-[]{};:'"\,<>./?@#$%^&*_~'''
str2 = ""
for i in str1:
    if i not in punctuations:
        str2 = str2+i
print(str2)
