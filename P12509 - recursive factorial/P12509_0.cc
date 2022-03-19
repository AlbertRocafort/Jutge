//Ens demanen una implementació de la funció factorial, però que sigui recursiva

//En la recursivitat, sempre trobem 2 casos:
//	Cas base: S’arriba a un punt final i no es fan més crides
//	Cas recursiu: Es fan les operacions que calguin i es fa una o més crides recursives

//Per definir cada un dels dos casos, ens possem exemples:
//	- factorial(0) = 1
//	- factorial(1) = 1
//	- factorial(2) = 2		(fins aquí encara no veiem res gaire obvi)
//	- factorial(3) = 6		= 3*2 = 3 * factorial(2)
//	- factorial(4) = 24	= 4*6 = 4 * factorial(3)
//
//Aquí ja podem veure quina estructura ha de seguir la nostra funció

#include <iostream>
using namespace std;

int factorial (int n) {

	//Cas base
	if (n <= 1) {
		return 1;

	//Cas recursiu
	} else {
		return n * factorial(n-1);
	}
}


//Aquí teniu un main amb els factorials del 0 al 5 per comprovar que funciona correctament

int main () {
	cout << factorial(0) << endl;
	cout << factorial(1) << endl;
	cout << factorial(2) << endl;
	cout << factorial(3) << endl;
	cout << factorial(4) << endl;
	cout << factorial(5) << endl;
}