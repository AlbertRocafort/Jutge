//Haurem de trobar els límits de la intersecció dels dos intervals
//Per fer-ho, calcularem primer el que serà el límit per l’esquerra, i després el que ho serà per la
//dreta.

#include<iostream>
using namespace std;

int main () {
	int esq1, dre1, esq2, dre2;
	
	cin >> esq1 >> dre1 >> esq2 >> dre2;
	
	//Comprovem si la intersecció dels intervals és nul·la
	if (esq1 > dre2 or esq2 > dre1) {
		cout << "[]" << endl;
	
	//Si no ho és, calculem els límits de la intersecció
	} else {

		int limitDret, limitEsquerra;

		//Comparem els dos possibles límits esquerres i ens quedem el més gran
		if (esq1 > esq2) limitEsquerra = esq1;
		else limitEsquerra = esq2;

		//Comparem els dos possibles límits drets i ens quedem el més petit
		if (dre1 < dre2) limitDret = dre1;
		else limitDret = dre2;

		cout << "[" << limitEsquerra << "," << limitDret << "]" << endl;
	}
}
