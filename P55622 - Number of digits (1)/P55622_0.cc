//Algorisme bàsic per contar dígits


#include<iostream>
using namespace std;

int main() {

	//Llegim la entrada i la imprimim directament, ja que després modificarem el número i
	//perdrem el seu valor original.
	int x;
	cin >> x;
	cout << "The number of digits of " << x << " is ";
	
	//Inicialitzem el contador a 1 perquè el bucle no iterarà pels nombres del 9 al 0.
	//Fer-ho així fa que quan es demani el nombre de dígits de 0 ho calculi correctament.
	int y = 1;
	while (x > 9){
		y++;
		x = x / 10;
	}
	
	cout << y << '.' << endl;
}
