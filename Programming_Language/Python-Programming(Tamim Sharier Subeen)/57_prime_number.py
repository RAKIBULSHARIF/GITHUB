#This programme combined of 55_prime_numeber.py and 56_prime_number.py
import math
def is_prime4(n=1013):
	if n < 2:
		return False
	if n == 2:
		return True
	if n % 2 == 0:
		return False
	m = math.sqrt(n)
	m = int(m) + 1
	for x in range(3, m, 2):
		if n % x == 0:
			return False
	return True
def is_prime3(n=1013):
	if n == 2:
		return True #2 is prime
	if n % 2:
		return False #all even number except 2 are not prime
	if n < 2:
		return False #numbers less than 2 are not prime
	prime = True
	for x in range(3, n, 2):
		if n % x == 0:
			prime = False
			return prime
	return prime
	
import timeit
t1 = timeit.timeit(is_prime3)
t2 = timeit.timeit(is_prime4)
print(t1, t2, t1/t2)