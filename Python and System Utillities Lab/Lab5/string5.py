lowerCaseCount = 0
upperCaseCount = 0
digitCount = 0
specialSymbolCount = 0

s = input('Enter the string : ')
for i in s:
    if i >= 'a' and i <= 'z':
        lowerCaseCount += 1
    elif i >= 'A' and i <= 'Z':
        upperCaseCount += 1
    elif i >= '0' and i <= '9':
        digitCount += 1
    else:
        specialSymbolCount += 1

print("Lower Case : {}\nUpper Case : {}\nDigits : {}\nSymbols : {}".format(
    lowerCaseCount, upperCaseCount, digitCount, specialSymbolCount))
