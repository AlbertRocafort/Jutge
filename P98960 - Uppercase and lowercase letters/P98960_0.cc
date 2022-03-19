//Per aquest exercici necessitarem saber com passar de majúscula a minúscula i viceversa


#include<iostream>
using namespace std;

int main() {
	char c;
	cin >> c;

		//Si és màjuscula
	if (c >= 'A' and c <= 'Z') {
		c += 'a'-'A';
	}

	//Si és minúscula
	else if (c >= 'a' and c <= 'z') {
		c += 'A'-'a';
	}

	cout << c << endl;
}

//Ja que en el enunciat no ens especifica si la entrada sempre serà una lletra o si és possible que no //ho sigui, és bona pràctica fer les comprovacions necessàries.
