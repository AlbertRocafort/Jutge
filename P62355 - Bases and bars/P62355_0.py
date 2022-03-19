from jutge import read

#Funció que imprimeix per pantalla el número amb la representació demanada
def pinta(n, b):

	#Barres inicials
	print("-" * 10)

	#Mentres es fa el canvi de base es van fent les impresions
	while n > 0:
		print("X" * (n % b))
		n = n // b

	#Barres finals
	print("-" * 10)



#Programa principal
def main():

	#Llegim la n i b de la entrada
	n = read(int)
	b = read(int)

	#Cridem la funció amb els valors de la entrada
	pinta(n, b)



main()
