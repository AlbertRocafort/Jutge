//Bucles

//Ens demanen específicamente que òptimitzen el codi per a que el jutge l’accepti, així que anem a
//veure que podem fer.

//Per trobar els divisors més petits que l’arrel és fàcil, es fa servir l'algoritme per trobar nombres
//primers i es modifica lleugerament per a que ens imprimeixi els divisors.

//Pero, pels divisors més grans que l’arrel, com es fa?

//No es tan facil com comprovar-los tots, ja que es perdria tota la optimització feta amb el primer
//bucle.

//La solució es troba en fer el mateix bucle que abans, però cap enrere, pero per cada i que trobem
//que divideix a x no la imprimirem com a divisor, sino que imprimirem el seu divisor corresponent
//més gran que la arrel de x.

#include<iostream>
using namespace std;

void calcula_divisors(int x) {
	
	//Cas perticular
	if (x == 1) cout << " 1";
	
	else {
		//Divisors més petits que la arrel
		int i = 1;
		while (i*i < x) {
			if (x % i == 0) cout << ' ' << i;
			i++;
		}
		
		//Comprovem si la última i era la arrel exacta de x
		if (i*i == x) cout << ' ' << i;

		//Decrementem i per evitar repetir algun divisor
		i--;
		
		//Divisors més grans que la arrel, en el ordre que toca
		while (i > 0) {
			if (x % i == 0) cout << ' ' << x/i;
			i--;
		}
	}
	
	cout << endl;
}

//Programa principal
int main() {
	
	int x;
	while (cin >> x) {
		cout << "divisors de " << x << ":";
		calcula_divisors(x);
	}
}
