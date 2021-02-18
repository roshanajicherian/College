class Number:
    def __init__(self,value):
        self.value=value
    def printNumber(self):
        print(self.value)
    def __truediv__(self,other):
        return (self.value/other.value)
        

no1=Number(10)
no2=Number(5)
print(no1/no2)