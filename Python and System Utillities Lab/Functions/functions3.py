import math
def circleArea():
    r=int(input("r : "))
    print("Area : ",(math.pi*(r**2)))
def areaRectangle():
    l=int(input("l : "))
    b=int(input("b : "))
    print("Area : ",l*b)
def areaSqaure():
    a=int(input("a : "))
    print("Area : ",a*a)
def areaTrinagle():
    b=int(input("b : "))
    h=int(input("h : "))
    print("Area : ",(1/3)*b*h)
circleArea()
areaRectangle()
areaSqaure()
areaTrinagle()