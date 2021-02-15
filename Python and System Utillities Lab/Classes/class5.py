class Number:
    def __init__(self,value):
        self.value=value
    def swapNumbers(A,B):
        temp=A.value
        A.value=B.value
        B.value=temp
    def printNumber(self):
        print(self.value)

no1=Number(10)
no2=Number(20)
print("Before Swapping")
no1.printNumber()
no2.printNumber()
Number.swapNumbers(no1,no2)
print("After Swapping")
no1.printNumber()
no2.printNumber()
