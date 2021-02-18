def findPerfectNumber(no):
    l1=[]
    for i in range(1,no):
        if no%i==0:
            l1.append(i)
    if sum(l1)==no:
        return True
    else:
        return False
no=int(input("No : "))
findPerfectNumber(no)