class Vehicle:
	"""Base class for all vehicles"""
	def __init__(self, name, manufacture, color):
		self.name = name
		self.manufacture = manufacture
		self.color = color
		
	def drive(self):
		print("Driving",self.manufacture,self.name)
		
	def turn(self, direction):
		print("Turning",self.name,"to",direction)
		
	def brake(self):
		print(self.name,"is stopping!")
class Car(Vehicle):
	"""Car Class"""
	
	def __init__(self, name, manufacture, color, year):
		self.name = name
		self.manufacture = manufacture
		self.color = color
		self.year = 2017
		self.wheels = 4
		print("A new car has been created. Name:", self.name)
		print("It has", self.wheels, "wheels")
		print("The car was built in", self.year)
		
	def change_gear(self, gear_name):
		"""Method of changing gear"""
		print(self.name, "is changing gear to", gear_name)
		
if __name__ == "__main__":
	c = Car("Mustang 5.0 GT Coupe","Ford","Red",2017)