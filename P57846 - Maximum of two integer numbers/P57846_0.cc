//Ens demanen que fem una funció que, de dos enters que arriben com a paràmetre, retorni el més
//gran dels dos.


#include <iostream>
using namespace std;

//En la capçalera hem d’indicar:
//	- El tipus de retorn de la funció
//	- El nom de la funció
//	- Els paràmetres que li arriben: de quin tipus són i quin serà el seu nom dins la funció

int max2(int a, int b) {
	if (a > b) return a;
	else return b;
}

//Recordem que si el tipus de retorn no és “void”, la funció ha d’acabar sempre amb un return
