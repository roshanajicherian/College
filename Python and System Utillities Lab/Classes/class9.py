class Shop:
    def __init__(self,itemId,itemName,quantity):
        self.itemId=itemId
        self.itemName=itemName
        self.quantity=quantity
    def add(self,units):
        self.quantity+=units
    def sell(self,units):
        self.quantity-=units
    def totalQuantity():
        return A.quantity+B.quantity

A=Shop(1,"A",10)
B=Shop(2,"B",20)
print(Shop.totalQuantity())
A.add(10)
B.add(10)
print(Shop.totalQuantity())
A.sell(20)
print(Shop.totalQuantity())
