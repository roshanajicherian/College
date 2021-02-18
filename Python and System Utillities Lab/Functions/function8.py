def addComplex(c1,c2):
    print("Sum : ",c1+c2)
def subComplex(c1,c2):
    print("Diffrence : ",c1-c2)
def mulComplex(c1,c2):
    print("Product : ",c1*c2)
a,b=[int(x) for x in input("a,b : ").split()]
c1=complex(a,b)
x,y=[int(x) for x in input("x,y : ").split()]
c2=complex(x,y)
addComplex(c1,c2)
subComplex(c1,c2)
mulComplex(c1,c2)