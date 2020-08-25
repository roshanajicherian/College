a = int(input("Enter the first number : "))
b = int(input("Enter the second number : "))
print("""Eneter the operation to perform : 
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Remainder
6.Exponent""")
choice = int(input())
if(choice == 1):
    print(a+b)
elif choice == 2:
    print(a-b)
elif choice == 3:
    print(a*b)
elif choice == 4:
    print(a/b)
elif choice == 5:
    print(a % b)
elif choice == 6:
    print(pow(a, b))
