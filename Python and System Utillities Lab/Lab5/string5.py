lower = 0
upper = 0
digit = 0
symbol = 0

s1 = input('Enter the string : ')
for i in s1:
    if i.isupper():
        upper+=1
    elif i.islower():
        lower+=1
    elif i.isdigit():
        digit+=1
    else:
        symbol+=1

print("Lower Case : {}\nUpper Case : {}\nDigits : {}\nSymbols : {}".format(
    lower, upper, digit, symbol))
