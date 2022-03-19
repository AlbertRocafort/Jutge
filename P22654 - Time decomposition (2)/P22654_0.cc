//En aquest cas, dels 4 paràmetres que li arriben a la funció, 3 són per referència.
//Els tres funcionen com a paràmetres de sortida. És a dir, que a l’inici de la funció no ens donen cap
//informació útil, però quan acabi la funció hi hem de guardar el resultat que li correspon a cadascun.

#include <iostream>
using namespace std;

void descompon (int n, int& h, int& m, int& s) {
	
	//Num de hores
	h = n / 3600;

	//Actualitzem n amb el residu de la divisió anterior
	n = n % 3600;
	
	//Num de minuts
	m = n / 60;

	//Num de segons
	s = n % 60;
}