#Dividirem el problema en 3 parts:
#	Pintar les n primeres files que formen una piràmide
#	Pintar les n-2 files del centre amb 2n - 1 ‘X’s
#	Pintar les n últimes files que formen una piràmide invertida


from jutge import read

def octagon(n):

	#Ens fixem que en la 1a fila es pinten sempre:
	#	n-1 espais en blanc
	#	n cops ‘X’
	#	n-1 espais en blanc
	#A més, veiem que per cada una de les n primeres files, dos espais en blanc es substitueixen per dos ‘X’s
	equis = n
	blancs = n-1 
	for i in range(n):
		for j in range(blancs):
			print(" ", end="")
		for z in range(equis):
			print("X", end="")
		blancs -= 1
		equis += 2
		print("")


	#En la 2a part del problema veiem que es pinten n-2 files de només ‘X’s
	equis -= 2
	for i in range (n-2):
		for j in range(equis):
			print("X", end="")
		print("")

	#Per últim, en la 3a part fem el mateix que en la primera, però substituint ‘X’s per espais en blanc
	blancs += 1
	for i in range(n):
		for j in range(blancs):
			print(" ", end="")
		for z in range(equis):
			print("X", end="")
		blancs = blancs + 1
		equis = equis - 2
		print("")



#En el main anem llegint n i cridem la funció octagon
def main():
	n = read(int)
	while n is not None:
		octagon(n)
		print("")
		n = read(int)


main()
