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

//	[2, 3, 5, 7, 9]
//	
//		|	  |
//	[2, 7, 5, 3, 9]
//	
//		|  |
//	[2, 5, 3, 7, 9]

	// Resetejem la variable per tornarle a utilitzar
	trobat = false;

	// Despres trobarem un que es menor que el seu anterior
	while(i < V.size() and not trobat) {

		if (i > e+1 and V[i] < V[i-1]) {
			d = i;
			trobat = true;
		}

		i++;
	}
	
	if (not trobat) d = e+1;
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
