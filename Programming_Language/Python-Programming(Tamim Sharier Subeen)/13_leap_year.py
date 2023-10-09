year = input("Please Write Your Year and Press Enter: ")
year = int(year)
if year % 4 != 0:
	print("Not a leap Year ",year)
else:
	if year % 100 != 0:
		print("Yes its a leap Year ",year)
	else:
		if year % 400 != 0:
			print("Not a leap Year ",year)
		else:
			print("Yes its a leap Year ",year)