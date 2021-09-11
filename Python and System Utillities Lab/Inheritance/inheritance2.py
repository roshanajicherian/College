"""Write a Python code to create a class named 'Member' having the following
members: Data members Name, Age, Phone number, Address, Salary. It also has a method
named 'printSalary' which prints the salary of the members. Two classes 'Employee' and
'Manager' inherits the 'Member' class. The 'Employee' and 'Manager' classes have data
members 'specialization' and 'department' respectively. Now, assign name, age, phone
number, address and salary to an employee and a manager by making an object of both of
these classes and print the same."""

class Member:
    def __init__(self,name,age,phone,addr,sal):
        self.name=name
        self.age=age
        self.phone=phone
        self.addr=addr
        self.sal=sal
    def printSalary(self):
        print("Salary : ",self.sal)

class Employee(Member):
    def __init__(self, name, age, phone, addr, sal,special):
        super().__init__(name, age, phone, addr, sal)
        self.special=special
    def printEmployeeData(self):
        print("""Name : {}
Age : {}
Phone : {}
Address : {}
Salary : {}
Sepcialization : {}\n""".format(self.name,self.age,self.phone,self.addr,self.sal,self.special))
class Manager(Member):
    def __init__(self, name, age, phone, addr, sal,department):
        super().__init__(name, age, phone, addr, sal)
        self.department=department
    def printMangerDetails(self):
        print("""Name : {}
Age : {}
Phone : {}
Address : {}
Salary : {}
Department : {}\n""".format(self.name,self.age,self.phone,self.addr,self.sal,self.department)) 

emp1=Employee('John Doe',28,956761671,'Cochin',50000,'SWE')
manager1=Manager('Jane Doe',33,46548216,'Trivandrum',800000,'Product Manager')
emp1.printEmployeeData()
manager1.printMangerDetails()
        
