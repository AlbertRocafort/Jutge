//Per a aquest exercici farem servir 2 funcions recursives
//	
//	- reduccio_digits: Com diu l’enunciat, si el número té 1 dígit, és el resultat, i sinó s’ha de fer la
//	  suma dels seus dígits.
//
//	- suma_digits: L’enunciat ens la demana i suma recursivament els dígits de un número


#include<iostream>
using namespace std;

//Funció recursiva per fer la suma dels dígits de un número
int suma_digits(int x) {

	//Si el número té 1 dígit el retornem
	if (x < 10) return x;

	//Si té més de 1 dígit retornem el 1r dígit + la suma dels demés dígits
	//Utilitzem aquesta implementació perqué l’enunciat ens exigeix que sigui recursiva
	else return x%10 + suma_digits(x/10);
}


//Funció principal
int reduccio_digits (int x) {

	//Si el número té 1 dígit, ja és el resultat
	if (x < 10) return x;

	//Sinó, es calcula la suma i s’aplica el mateix procés
	else {
		int suma = suma_digits(x);
		return reduccio_digits(suma);
	}
}


//Fixeu-vos que la descripció de la funció reduccio_digits de l’enunciat té naturalesa
//recursiva:
//	- “Altrament, es torna a aplicar el mateix procés a la suma obtinguda” -> Cas recursiu
//	- “Fins a tenir un sol dígit” -> Cas base