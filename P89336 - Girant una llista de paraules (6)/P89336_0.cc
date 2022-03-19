#include<iostream>
using namespace std;


//Molt important que contador passi per referència. Sinò, quan tornem de les crides recursives el valor
//actualitzat no es mantindrà

void imprimeix (int& contador) {
	
	string s;
	if (cin >> s) {

		//Incrementem el número de paraules llegides
		++contador;

		//Guardem en quina posició hem llegit la paraula
		int possicio_paraula = contador;

		//Fem la crida recursiva
		imprimeix(contador);

		//Al tornar de la crida recursiva, si s és de la primera meitat de paraules llegides,
		//s’imprimirà
		if (possicio_paraula <= contador/2){
			cout << s << endl;
		}
	}
}


int main () {
	int x = 0;
	imprimeix (x);
}
