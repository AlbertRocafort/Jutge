#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void posicions(const vector<int>& V, int& e, int& d) {

	int i = 0;
	bool trobat = false;

	// Primer trobarem un num que sera mes gran que el seu seguent
	while (not trobat) {
		
		if (V[i] > V[i+1]) {
			e = i;
			trobat = true;
		}

		i++;
	}

//	// Resetejem la variable per tornarle a utilitzar
//	trobat = false;
//
//	// Despres trobarem un que es menor que el seu anterior
//	while(i < V.size() and not trobat) {
//
//		// El cas on els dos elements desordenats son consecutius es bastant conflictiu
//		// Per lo que aqui l'ignorarem i seguirem amb el bucle
//		if (i > e+1 and V[i] < V[i-1]) {
//			d = i;
//			trobat = true;
//		}
//
//		i++;
//	}
//	
//	// Al final del bucle, si no hem trobat el 2n valor desordenat
//	// es pq es troba en la posicio consecutiva de e, i ens haviem saltat aquest cas
//	if (not trobat) d = e+1;

	while(i < V.size()) {

		// El cas on els dos elements desordenats son consecutius es bastant conflictiu
		// Per lo que aqui l'ignorarem i seguirem amb el bucle
		if (V[i] < V[i-1]) {
			d = i;
		}

		i++;
	}
}



int main() {

	vector<int> V = vector<int>(5);
	V[0] = 2;
	V[1] = 7;
	V[2] = 5;
	V[3] = 3;
	V[4] = 9;

	int e, d;
	posicions(V, e, d);

	cout << e << " // " << d << endl;

}
