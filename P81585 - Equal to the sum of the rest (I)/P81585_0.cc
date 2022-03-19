//Si hi ha un nombre que és igual a la suma dels demés números, aquest serà el més gran de la
//seqüència.

//El que farem és anar sumant tots els números i guardar en una variable el número més gran que
//trobem. Un cop acabats de llegir tots els números, comprovarem si aquest número més gran és
//igual a la suma dels demés.


#include <iostream>
using namespace std;

int main () {
	int n;
	
	//Mentre hi hagi casos a llegir
	while (cin >> n) {

		//Com que l’enunciat diu que l’entrada són naturals, podem inicialitzar el màxim en 0.
		int max = 0;
		int suma = 0;
		
		//Llegim n númeor i els sumem a “suma” i anem mantenint el nombre més gran
		//que trobem
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			suma += x;
			if (x > max) max = x;
		}
		
		//Comprovem si el número més gran que hem trobat coincideix amb la suma de la //resta
		if (max == suma - max) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
