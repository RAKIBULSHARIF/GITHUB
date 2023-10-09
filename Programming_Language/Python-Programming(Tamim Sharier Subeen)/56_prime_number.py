#Final program construct in 57_prime_number.py
import math
def is_prime4(n):
	if n < 2:
		return False
	if n == 2:
		return True
	m = math.sqrt(n)
	m = int(m) + 1
	for x in range(3, m, 2):
		if n % x == 0:
			return False
	return True