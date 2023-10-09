class Car:
	def __init__(self,n,c):
		self.name = n
		self.color = c
	def start(self):
		print("name: ",self.name)
		print("color: ",self.color)
		print("Starting the Engine")
my_car = Car("Corolla","White")
Car.start(my_car)