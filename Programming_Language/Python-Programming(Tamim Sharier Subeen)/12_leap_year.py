year = input("Please Your Year and Press Enter: ")
year = int(year)
if year % 4 == 0:
	if year % 100 == 0:
		if year % 400 == 0:
			print("This Year is a Leap Year",year)
		else:
			print("This Year is not a Leap Year",year)
	else:
		print("This Year is a Leap Year",year)
else:
	print("This is not a Leap Year",year)