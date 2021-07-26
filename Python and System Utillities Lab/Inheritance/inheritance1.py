"""Create a class person with attributes Name, age, salary and a method display()
for showing the details. Create two instances of the class and call the method for each
instance."""
class Person:
    def __init__(self,name,age,salary):
        self.name=name
        self.age=age
        self.salary=salary
    def display(self):
        print("""Name : {}
Age : {}
Salary : {}\n""".format(self.name,self.age,self.salary))

person1=Person('John',28,50000)
person2=Person('Jane',25,53000)
person1.display()
person2.display()
