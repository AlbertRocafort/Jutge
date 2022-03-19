//Si ens fixem, no hem de guardar totes les paraules per res. Només hem de llegir-les una a una i:
//
//	- Si coincideix amb la 1a paraula, incrementem el contador
//	- Si no coincideix, posem el contador a 0.

//Compte: en els jocs de proves veiem que la 1a paraula ja conta per la subseqüència


#include <iostream>
using namespace std;

int main () {

	//Inicialitzats a 1 per contar la 1a paraula que llegim, que la llegim fora del bucle
	int cont = 1, max = 1;
	
	//Llegim la 1a paraula
	string ref;
	cin >> ref;

	//Anirem llegint les paraules i guardant-les en s per comparar-es
	string s;
	while (cin >> s) {
		if (s == ref) {
			cont ++;
			if (cont > max) max = cont;
		} 
		else {
			cont = 0;
		}
	}
	cout << max << endl;
}
