//Tot i que el codi d’aquest problema és molt simple, deduïr la solució no és gens fàcil si no s’ha fet
//cap problema de l’estil.


//Cada cop que llegim un caràcter, tenim 2 possibilitats:
//
//	- Que sigui un número: El passarem a enter per poder operar i el retornarem
//	- Que sigui una signe: Operarem amb els 2 números o expressions que venen a continuació

//Per llegir les dues expressions que venen després d’un signe utilitzarem crides recursives.


#include<iostream>
using namespace std;

int prefixed_expression() {
	
	//Llegim el següent caràcter
	char c;
	cin >> c;
	
	//Si és un número el passem de caràcter a enter i el retornem
	if (c >= '0' and c <= '9') return c - '0';
	
	//Si és un signe, llegim les següents dos experessions i retornem el resultat d’operar
	if (c == '+') return prefixed_expression() + prefixed_expression();
	if (c == '-') return prefixed_expression() - prefixed_expression();
	if (c == '*') return prefixed_expression() * prefixed_expression();
	
}



int main () {
	cout << prefixed_expression() << endl;
}
