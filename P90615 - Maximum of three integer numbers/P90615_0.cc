//Mirem quin és més gran dels dos primers: a o b.
//El que sigui més gran dels dos el comparem amb c i trobem el més gran dels tres

#include<iostream>
using namespace std;

int main () {
	int a, b, c;
	int max;
	cin >> a >> b >> c;

	//Guardem el més gran de a i b en la variable max
	if (a > b) {
		max = a;
	} else {
		max = b;
 	}

	//Comparem el maxim de a i b amb c i decidim quin imprimir
	if (max > c) {
		cout << max << endl;
	} else {
		cout << c << endl;
	}
}
