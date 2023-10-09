class Car:
	def __init__(self, n, c):
		self.name = n
		self.color = c
	def start(self):
		print("Starting the Engine")
car = Car("Corolla","White")
car.year = 2017
print(car.name, car.color, car.year)