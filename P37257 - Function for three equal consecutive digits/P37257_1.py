#Aquesta funció retorna cert si n té 3 dígits seguits iguals quan està expresat en base b
def tres_digits_seguits_iguals(n, b):
	
	#Si hem arribat a n = 0 és pq no hem trobat 3 dígits iguals consecutius en cap de les crides anteriors
	if n == 0: return False

	#Calculem els tres primers residus
	m = n #Var aux per no modificar n

	x1 = m%b
	m = m // b

	x2 = m%b
	m = m // b

	x3 = m%b

	#Si els 3 residus calculats son iguals retornem true
	#Si no, provem amb n/b
	return (x1 == x2 and x2 == x3) or tres_digits_seguits_iguals(n//b, b)
