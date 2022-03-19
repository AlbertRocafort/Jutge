//Ens demanen que fem una funció a la que li arribin tres enters com a paràmetre i retorni un boolea
//indicant si la data indicada és vàlida o no.

//Utilitzarem la funció de l’exercici anterior (En el Jutge l’haureu de tornar a implementar però aquí no
//la tornarem a escriure).

//Només comprovarem les condicions per les que es retorna true. Si no es compleix cap, es retorna
//false.


#include <iostream>
using namespace std;

bool es_any_de_traspas (int any) {
	
	//Si no és múltiple de 4 no és any de traspàs
	if (any % 4 != 0) return false;


	//A aquest part de la funció només arribem si any és múltiple de 4
	//Si no acaba en 2 zeros és any de traspàs
	if (any%100 != 0) return true;


	//A aquest part de la funció només arribem si any és múltiple de 4 i acaba en 00
	//Mirem si el nombre que queda al treure els 2 zeros és divisible per 4
	if ((any/100)%4 == 0) return true;
	
	//A aquest part de la funció només arribem si any és múltiple de 4, acaba em 00 i el nombre
	//que queda després de treure els zeros no és divisible per 4.
	//En aquest cas, no serà any de traspàs
	return false;
}

bool is_valid_date(int d, int m, int y) {

	//Mesos de 31 dies
	if (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) {
		if (d >= 1 and d <= 31) {
			return true;
		}
	}

	//Mesos de 30 dies
	else if (m== 4 or m == 6 or m == 9 or m == 11) {
		if (d >= 1 and d <= 30) {
			return true;
		}
	}

	//Febrer (Que pot tenir 28 o 29 dies, segons l’any)
	else if (m == 2) {
		if (es_any_de_traspas(y)) {
			if (d >= 1 and d <= 29) {
				return true;
			}
		} else {
			if (d >= 1 and d <= 28) {
				return true;
			}
		}
	}
	
	return false;
}
