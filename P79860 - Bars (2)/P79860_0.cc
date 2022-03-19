//Repetim el procés de l’exercici anterior:

//Mirem patro(1)
//Busquem patro(1) en patro(2):		patro(2) = ** + patro(1) + patro(1)
//Busquem patro(2) en patro(3):		patro(3) = *** + patro(2) + patro(2)

//Tornem a tenir la estructura de lafunció


#include<iostream>
using namespace std;

void bars(int n) {

	//n asteriscos
	for (int i = 0; i < n; i++) cout <<'*';
	cout << endl;
	
	//Crides recursives per n-1 (Si calen)
	if (n > 1) {
		bars(n-1);
		bars(n-1);
	}
}

int main () {
	int n;
	cin >> n;
	bars(n);
}