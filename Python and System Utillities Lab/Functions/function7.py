def linearSearch(l1,key):
    for i in l1:
        if i==key:
            return True
    return False

l1=[int(x) for x in input("Enter list : ").split()]
key=int(input("Key"))
if linearSearch(l1,key):
    print("Present")
else:
    print("Not present")
