str1 = input("Enter the string : ")
length = len(str1)
# print(length)
for i in range(0, length):
    if str1[i] != str1[length-i-1]:
        print("The string is not a palindrome")
        quit()
print("The string is a plaindrome")
