//En aquest exercici, els paràmetres ja no ens arriben per valor com fins ara. Ens arriben per
//referència. Això vol dir que els canvis que lis realitzem dins de les funcions, es veuran reflexats
//també en el programa principal

#include <iostream>
using namespace std;

void swap2(int& a, int& b) {
	int x = a;
	a = b;
	b = x;
}



//La funció de swap sol ser la primera que és fa per veure l'efecte que té el pas per referència.
//Executant-la amb el següent main podem veure-ho més clarament:

int main () {
	int a = 3;
	int b = 6;

	cout << "a = " << a << "; b = " << b << endl;

	swap (a, b);

	cout << "a = " << a << "; b = " << b << endl;
}

//Veurem que efectivament, els valors no s’han canviat només a dins de la funció, sinó que també fora d’ella

//Una manera de veure la diferència de pas per referència i pas per valor és executant el mateix
//programa de les dues maneres, i observar quines diferències hi ha en els resultats.
