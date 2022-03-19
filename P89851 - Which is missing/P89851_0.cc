//Com que sabem que ens donaran els números 1, 2, 3, …, n (sense repetir-se cap) excepte un, el
//més fàcil és sumar 1 + 2 + 3 + … + n, i a mesura que anem llegint números, anirem restant-los a la
//suma total. El nombre que quedi al acabar les restes serà el nombre que no hem llegit.


#include<iostream>
using namespace std;

//Fa la suma 1 + 2 + 3 + … + x
int sumatori (int x) {
	int suma = 0;

	for (int i = 1; i <= x; i++)
		suma += i;
	
	return suma;
}


int main () {
	int n, x, suma;
	
	while (cin >> n) {
		suma = sumatori (n);
	
		//Llegim n-1 nombres que ens donen com entrada
		for (int i = 0; i < n - 1; i++) {

			//Cada número que llegim el restem a la suma
			cin >> x;
			suma -= x;
		}
		
		//El nombre que quedi serà el nombre que no hem llegit
		cout << suma << endl;
	}
}
