class complexNumber:
    def __init__(self,real=0,imaginary=0):
        self.real=real
        self.imaginary=imaginary
    def printComplexNumber(self):
        print(f"The complex number is {self.real}+{self.imaginary}j")
    def addComplexNumber(self,B):
        C=complexNumber()
        C.real=self.real+B.real
        C.imaginary=self.imaginary+B.imaginary
        C.printComplexNumber()
    
A=complexNumber(1,2)
B=complexNumber(1,2)
A.addComplexNumber(B)
