//Ens demanen que implementem una funció a la que li arriba un enter que repressenta un any, i ha
//de retornar un boolea que indiqui si és un any de traspàs o no

//Segons l’enunciat, un any de traspàs compleix alguna de les següents condicions:
//	- Els anys de traspàs són els múltiples de quatre que no acaben en dos zeros
//	- També ho són els acabats en dos zeros tals que el nombre que queda després de treure els //	   dos zeros finals és divisible per quatre.


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

//Aprofitem que quan es fa un return es surt de la funció i no s’executa el que ve després, per lo que
//no fa falta els else que possariem de normal

