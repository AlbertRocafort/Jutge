//El programa llegirà una seqüència de enters i els anirà traduïnt a nombres romans.

//Per cada nombre que llegim cridarem a la funció “escriu_roma(int n)”.
//Aquesta funció, separarà n en dígits i cridarà “escriu dígit(int n, char dígit)” per cada un


#include<iostream>
using namespace std;


//A aquesta funció li arriben dos paràmetres:
//	- int n: El nombre que s’ha d’escriure en roma
//	- char digit: Indica si el nombre que s’ha de representa les unitats, les decenes, …

void escriu_digit(int n, char digit) {
	char c1, c5, c10;
	

	//Mirem quin digit estem escribint i agafem les lletres que podem necessitar per escriure’l

	if (digit == 'u') {
		c1 = 'I';
		c5 = 'V';
		c10 = 'X';
	} else if (digit == 'd') {
		c1 = 'X';
		c5 = 'L';
		c10 = 'C';
	} else if (digit == 'c') {
		c1 = 'C';
		c5 = 'D';
		c10 = 'M';
	} else {
		c1 = 'M';
	}


	//Escribim la combinació que representa el número n en romà

	if (n == 1) cout << c1;
	else if (n == 2) cout << c1 << c1;
	else if (n == 3) cout << c1 << c1 << c1;
	else if (n == 4) cout << c1 << c5;
	else if (n == 5) cout << c5;
	else if (n == 6) cout << c5 << c1;
	else if (n == 7) cout << c5 << c1 << c1;
	else if (n == 8) cout << c5 << c1 << c1 << c1;
	else if (n == 9) cout << c1 << c10;
}
//Aquesta funció separa el nombre n que li arriba en dígits i després fa una crida per cada un per
//escriure’ls.

//Es pot observar que primer es guarden els dígits i després es fan les crides. Això és perquè obtenim
//els dígits en l’ordre invers al que els hem d’imprimir.

void escriu_roma(int n) {

	//Format d’impressió que exigeix el Jutge
	cout << n << " = ";


	//Separem n en dígits
	int unitats = n%10;
	n /= 10;

	int decenes = n%10;
	n /= 10;

	int centenes = n%10;
	n /= 10;

	int milers = n;


	//Escrivim els dígits en l’ordre que s’ha de fer
	escriu_digit(milers, 'm');
	escriu_digit(centenes, 'c');
	escriu_digit(decenes, 'd');
	escriu_digit(unitats, 'u');

	cout << endl;
}


//Programa principal

int main() {

	int n;
	while (cin >> n) escriu_roma(n);
}
