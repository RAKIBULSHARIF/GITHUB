year = input("Please write you year and press enter: ")
year = int(year)
if year % 400 == 0:
	print("Yes its a leap year ",year)
elif year % 100 == 0:
	print("Not a leap year ",year)
elif year % 4 == 0:
	print("Yes its a leap year ",year)
else:
	print("Not a leap year ",year)