from jutge import read

def es_equilibrat(n):

	suma_parells = 0
	suma_senars = 0

	while n > 0:
		suma_senars += n%10
		n //= 10
		suma_parells += n%10
		n //= 10

	if suma_parells == suma_senars: return True
	return False


def main():

	n = read(int)

	while n != None:
		if es_equilibrat(n): print(1)
		else: print(0)

		n = read(int)


main()