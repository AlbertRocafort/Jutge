//Una altre versió dels exercicis anteriors. En aquest es fan primer les crides i després s’escriuen n
//asteriscos

//Podem utilitzar el mateix mètode que abans per acostumar-nos a fer-lo servir


#include <iostream>
using namespace std;

void barres(int n) {

//Cas base
	if (n == 1) cout << '*' << endl;

	//Cas recursiu
	else {
		//Crides recursives per n-1
		barres(n - 1);
		barres(n - 1);

		//n asteriscs
		for (int i = 0; i < n; ++i) cout << '*';
		cout << endl;
	}
}


int main() {
	int n;
	while (cin >> n) {
		barres(n);
	}
}