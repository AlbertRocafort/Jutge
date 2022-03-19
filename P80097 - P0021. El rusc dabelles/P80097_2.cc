#include<iostream>
using namespace std;

//Aquest exercici és com el dels tiagle o el del rombe, amb la complicació de que depenent de quina linia estem imprimint, hem de fer una cosa o una altre.
//La fila 0 (la 1a) és especial, ja que només s'imprimeixen caràcters '_' i espais en blanc
//A partir de la fila 1:
//		- Files parell: S'escriuen els caràcters '\' -> '_' -> '/' -> ' ' -> es repeteix fins acabar en '/'
//		- Files imparell: S'escriuen els caràcters '/' -> ' ' -> '\' -> '_' es repeteix fins acaben en '\'



void pinta_rusc(int f,  int c) {
	
	//iterem pel nombre de files que hem d'imprimir
	for (int i = 0; i < f * 2 + 1; i++) {	
		
		//1a fila
		if (i == 0) {
			for (int j = 0; j < c * 4 - 2; j++) {
				if (j % 4 == 0 or j % 4 == 2 or j % 4 == 3) cout << ' ';
				else cout << '_';
			}
			cout << endl;
		}
		
		//Files parells
		else if (i % 2 == 0) {
			for (int j = 0; j < c * 4 - 1; j++) {
				if (j % 4 == 0) cout << '\\';
				else if (j % 4 == 1) cout << '_';
				else if (j % 4 == 2) cout << '/';
				else cout << ' ';
			}
			cout << endl;
		}
		
		//Files imparelles
		else {
			for (int j = 0; j < c * 4 - 1; j++) {
				if (j % 4 == 0) cout << '/';
				else if (j % 4 == 1) cout << ' ';
				else if (j % 4 == 2) cout << '\\';
				else cout << '_';
			}
			cout << endl;
		}
	}
}



int main() {
	
	int f, c;
	bool primera_lectura = true;
	
	while (cin >> f >> c) {
		
		if (primera_lectura) primera_lectura = false;
		else cout << endl;
		
		pinta_rusc(f, c);
	}
}


//f, c (input) -> f, c (output)
//1, 1 		   -> 3, 3
//1, 2		   -> 3, 7
//2, 1		   -> 5, 3
//3, 4		   -> 7, 15
//5, 5		   -> 11, 19

//f -> input * 2 + 1
//c -> input * 4 - 1
