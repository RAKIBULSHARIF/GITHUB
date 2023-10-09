class Car:
	def __init__(self, n, c, m, y, engpow):
		self.name = n
		self.color = c
		self.manufrature = m
		self.year = y
		self.enginepower = engpow
	def start(self):
		print("Name: ",self.name)
		print("Color: ",self.color)
		print("Manufrature: ",self.manufrature)
		print("Year: ",self.year)
		print("Engine_ power:  cc",self.enginepower)
		print("Starting the engine.")
	def brake(self):
		print("Brake the car")
	def drive(self):
		print("Let's drive the car")
	def turnR(self):
		print("Turn Left")
	def turnL(self):
		print("Turn Right")
	def gearchange(self):
		print("Car gear changed")
my_car1 = Car("Corolla","White","Toyota","2017","1300")
my_car1.start()
my_car1.brake()
my_car1.gearchange()
my_car1 = Car("Allion","Grey","Toyota","2019","1500")
my_car1.start()
my_car1.turnL()
my_car1.drive()
my_car1 = Car("Premio","Blue","Toyota","2020","1390")
my_car1.start()
my_car1.turnR()
my_car1.gearchange()