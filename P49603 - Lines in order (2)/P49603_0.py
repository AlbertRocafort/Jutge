from jutge import read

def main():

	n = read(int)
	ultima_linia_ordenada = 0
	linia = 1

	while n != None:

		ordenada = True
		s1 = ""

		for i in range(n):

			s2 = s1
			s1 = read(str)

			if i > 0:
				if s2 > s1: ordenada = False


		if ordenada: ultima_linia_ordenada = linia
		n = read(int)
		linia += 1


	if ultima_linia_ordenada == 0: print("No hi ha cap linia ordenada creixentment.")
	else: print("L'ultima linia ordenada creixentment es la ", ultima_linia_ordenada, ".", sep="")


main()