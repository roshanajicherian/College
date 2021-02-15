class Rectangle:
    def __init__(self,length,width):
        self.length=length
        self.width=width
    def findArea(self):
        return self.length*self.width
    def findPerimeter(self):
        return 2*(self.length+self.width)

rect1=Rectangle(10,20)
print(rect1.findArea())
print(rect1.findPerimeter())