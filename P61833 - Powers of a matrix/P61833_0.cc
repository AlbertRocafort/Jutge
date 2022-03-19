#include<iostream>
#include<vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

Matriu mult(const Matriu& a, const Matriu& b, int m) {
	Matriu aux (2, vector<int> (2));
	
	aux[0][0] = ((a[0][0] * b[0][0]) % m + (a[0][1] * b[1][0]) % m) % m;
	aux[0][1] = ((a[0][0] * b[0][1]) % m + (a[0][1] * b[1][1]) % m) % m;
	aux[1][0] = ((a[1][0] * b[0][0]) % m + (a[1][1] * b[1][0]) % m) % m;
	aux[1][1] = ((a[1][0] * b[0][1]) % m + (a[1][1] * b[1][1]) % m) % m;
	
	return aux;
}

Matriu potencia(const Matriu& M, int n, int m) {
	
	Matriu aux (2, vector<int> (2));
	
	if (n == 0) 
	{
		aux[0][0] = aux[1][1] = 1;
		aux[0][1] = aux[1][0] = 0;
		return aux;
	} 
	else if (n % 2 == 0) 
	{
		aux = potencia(M, n/2, m);
		return mult(aux, aux, m);
		
	}
	else
	{
		aux = potencia(M, n/2, m);
		aux = mult(aux, aux, m);
		return mult(aux, M, m);
	}
}

int main () {
	Matriu M (2, vector<int> (2));
	int n, m;
	
	while (cin >> M[0][0] >> M[0][1] >> M[1][0] >> M[1][1] >> n >> m) {
		M = potencia(M, n, m);
		cout << M[0][0] << ' ' << M[0][1] << endl;
		cout << M[1][0] << ' ' << M[1][1] << endl;
		cout << "----------" << endl;
	}
}
