year = input("Please Write Year and Press Enter: ")
year = int(year)
if year % 100 != 0 and year % 4 == 0:
	print("Yes its a leap year ",year)
elif year % 100 == 0 and year % 400 == 0:
	print("Yes its a leap year ",year)
else:
	print("Not a leap year ",year)