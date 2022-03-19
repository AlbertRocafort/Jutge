#include<iostream>
#include<vector>
using namespace std;

typedef vector<vector<pair<char, int> > > Matrix;




void comprovaVertical(string paraula, const Matrix& sopa, int i, int j, int& puntuacio) {
	
	int suma = 0;
	int llargada = paraula.size();
	int k = 0;
	bool final = false;
	
	while (k < llargada and not final) {
		if (paraula[k] == sopa[i+k][j].first) suma += sopa[i+k][j].second;
		else final = true;
		
		k++;
	}
	
	if (not final and k == llargada and suma > puntuacio) puntuacio = suma; 
}

void comprovaHoritzontal(string paraula, const Matrix& sopa, int i, int j, int& puntuacio) {
	
	int suma = 0;
	int llargada = paraula.size();
	int k = 0;
	bool final = false;
	
	while (k < llargada and not final) {
		if (paraula[k] == sopa[i][j+k].first) suma += sopa[i][j+k].second;
		else final = true;
		
		k++;
	}
	
	if (not final and k == llargada and suma > puntuacio) puntuacio = suma; 
}




int main() {
	
	int f, c;
	
	while (cin >> f >> c) {
		
		//Creacio i lectura de les matrius
		Matrix sopa(f, vector<pair<char, int> >(c));
		for (int i = 0; i < f; i++) {
			for (int j = 0; j < c; j++)
				cin >> sopa[i][j].first;
		}
		for (int i = 0; i < f; i++) {
			for (int j = 0; j < c; j++)
				cin >> sopa[i][j].second;
		}
		
		//LLegim les paraules
		int numParaules;
		cin >> numParaules;
		vector<string> Paraules(numParaules);
		for (int i = 0; i < numParaules; i++) cin >> Paraules[i];
		
		
		//Repasem la matriu un cop per paraula
		for (int i = 0; i < numParaules; i++) {
			
			string aux = Paraules[i];
			int tamany_paraula = aux.size();
			int puntuacio = -1;
			
			for (int j = 0; j < f; j++) {
				for (int k = 0; k < c; k++) {
					if (sopa[j][k].first == aux[0]) {
						if (j + tamany_paraula - 1 < f) comprovaVertical(aux, sopa, j, k, puntuacio);
						if (k + tamany_paraula - 1 < c) comprovaHoritzontal(aux, sopa, j, k, puntuacio);
					}
				}
			}

			if (puntuacio == -1) cout << "no" << endl;
			else cout << puntuacio << endl;
		}
	}
}