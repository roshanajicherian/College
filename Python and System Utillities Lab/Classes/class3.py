class Number:
    def __init__(self,value):
        self.value=value
    def subtractNumbers(self,subtractBy):
        self.value-=subtractBy
    def printNumber(self):
        print(self.value)

no1=Number(10)
no1.printNumber()
no1.subtractNumbers(5)
no1.printNumber()