
def factorial_doble(n):

	if n == 0 or n == 1: return 1
	return n * factorial_doble(n-2)