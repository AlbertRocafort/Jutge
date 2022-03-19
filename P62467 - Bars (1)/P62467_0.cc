//Tornem a tenir un exercici de patrons, però aquest cop, es resol amb recursivitat.

//Per resoldre’l ens fixarem en els exemples que ens dona el jutge:

//Primer ens fixem en el cas n = 1 -> *

//En segon lloc, busquem on colocar el patro de n = 1 en el patro de n = 2.
//	Trobem que patro(2) = patro(1) + ** + patro(1)

//Ens fixem en el cas on n = 3 i veiem que es repeteix la estructura:
//	patro(3) = patro(2) + *** + patro(2)

//Ja tenim l’estructura de la funció:


#include<iostream>
using namespace std;

void bar(int n) {
	
	//Cas base
	if (n == 1) {
		cout << '*' << endl;

	//Cas recursiu
	} else {

		//Crida recursiva per n-1
		bar(n-1);

		//n asteriscos
		for (int i = 0; i < n; i++) {
			cout << '*';
		}
		cout << endl;

		//Crida recursiva per n-1
		bar (n-1);
	}
	
}


int main () {
	int n;
	cin >> n;
	bar(n);
}