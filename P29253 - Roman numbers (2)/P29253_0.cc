//Aquest cop és al revés, llegim nombres en roma i hem de traduir-los a la representació habitual

//Haurem de tenir en compte en quin ordre llegim cada lletra, ja que per exemple en el número 4 (IV), 
// la ‘I’ està restant a la ‘V’

//Per resoldre el problema, anirem tractant les lletres una a una, però mantenint la última que haviem
//llegit, i si trobem una lletra que és més gran que l’anterior, haurem de fer els càlculs necessaris per
//a que la suma al final doni el valor correcte
 

#include<iostream>
using namespace std;

//Funció que tradueix una lletra al seu valor
int traduccio(char c) {
	if (c == 'M') return 1000;
	if (c == 'D') return 500;
	if (c == 'C') return 100;
	if (c == 'L') return 50;
	if (c == 'X') return 10;
	if (c == 'V') return 5;
	if (c == 'I') return 1;
	
	return 0;
}


int main() {

	//Llegim l’string amb les lletres romanes
	char c;
	while (cin >> c) {

		//Inicialitzem les variables a 0
		int sum, num1, num2;
		sum = num1 = num2 = 0;

		while (c != '.') {

			cout << c;


			//Pasem el valor que teniem en num2 a num1 i en num2 guardem el valor de
			//la següent lletra
			num1 = num2;
			num2 = traduccio(c);

			//Si el la nova lletra llegida és més gran que l’anterior:
			//	- Es suma el valor de la lletra llegida
			//	- Es resta el valor de la lletra anterior 2 cops

			if (num2 > num1) sum += num2 - 2*num1;


			//Si la lletra que llegim és més petita que l’anterior, es suma el valor
			//d’aquesta al resultat final

			else sum += num2;

			cin >> c;
		}

		//Imprimim el resultat
		cout << " = " << sum << endl;
	}
}
