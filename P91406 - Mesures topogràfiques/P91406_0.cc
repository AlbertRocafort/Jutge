//Tractament en seqüència

//Per resoldre aquest exercici, necessitarem 5 variables:
//	- 2 per saber en quina altura es trobaven la montanya i al neu en el punt anterior
//	- 2 per anar llegint els increments
//	- 1 per controlar que si s’ha detectat un error no es continui llegint

#include<iostream>
using namespace std;

int main () {
	//Ens diuen que a l’inici tant la montanya com la neu tenen altura 0
	int montanya = 0;
	int neu = 0;
	
	//Variables per llegir els increments
	int increment_m, increment_n;

	//Si s’ha detectat un error, passarà a valdre true i no es seguirà executant el bucle
	bool error = false;
	
	while (not error and cin >> increment_m >> increment_n) {
		
		//Acutalitzem els valors
		montanya += increment_m;
		neu += increment_n;
		
		//Controlem que no s’hagi produit un error
		if (montanya < 0 or neu < 0) {
			cout << "ERROR" << endl;
			error = true;
		}
		
		//Si tot està correcte s’imprimeix el que es demana
		else {
			for (int i = 0; i < montanya; i++) cout << 'X';
			for (int i = 0; i < neu; i++) cout << '.';
			cout << endl;
		}
	}
}
