class Car:
	def __init__(self, n, c):
		self.name = n
		self.color = c
	def start(self):
		print("Name: ",self.name)
		print("Color: ",self.color)
		print("Starting the engine")
my_car1 = Car("Corolla","White")
my_car1.start()
my_car2 = Car("Premio","Black")
my_car2.start()
my_car3 = Car("Axio","Blue")
my_car3.start()