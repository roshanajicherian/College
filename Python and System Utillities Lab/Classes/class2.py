def myFunc(*tooManyArgs):
    print(tooManyArgs)


l1=[x for x in input("Enter the arguments that you want to pass : ").split()]
myFunc(l1)
