"""Write a Python program to find out the total mark of a student using multiple
inheritance. Declare a Student class. Student class should have the member functions
for accept and display student details. Declare a Sports class to accept and display
sports marks of the student. Derive a class statement from both the classes. This class
should have the member functions to accept marks of three subjects and add those
marks with sports marks and display the result."""
class Student:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def studentDetailDisplay(self):
        print("""Name : {}
Age : {}""".format(self.name,self.age))

class Sports:
    def __init__(self,sport):
        self.sport=sport
    def displaySportMarks(self):
        print(self.sport)
class statement(Student,Sports):
    def __init__(self,name,age,sport,m1,m2,m3):
        Student.__init__(self,name,age)
        Sports.__init__(self,sport)
        self.m1=m1
        self.m2=m2
        self.m3=m3
    def dispalyTotalMarks(self):
        res=self.sport+self.m1+self.m2+self.m3
        print("Final {}".format(res))

student1=statement('John Doe',18,50,50,50,50)
student1.dispalyTotalMarks()
