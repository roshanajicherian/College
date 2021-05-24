class Shop:
	totalItems=0
	def __init__(self,itemId,itemName,quantity):
		self.itemId=itemId
		self.itemName=itemName
		self.quantity=quantity
		Shop.totalItems+=quantity
	def buy(self,addAmount):
		self.quantity+=addAmount
		Shop.totalItems+=addAmount
	def sell(self,remove):
		self.quantity-=remove
		Shop.totalItems-=remove
	def total_items():
		return Shop.totalItems
x=Shop(1,"Apples",20)
print(Shop.total_items())
y=Shop(2,"Oranges",30)
print(Shop.total_items())