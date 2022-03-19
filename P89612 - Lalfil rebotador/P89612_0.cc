#include<iostream>
#include<vector>
using namespace std;

typedef vector<char> Row ;
typedef vector<Row> Matrix;

//Función para comprobar si es una esquina
bool esquina (int i, int j, int f, int c) {
	return (i == 0 and j == c-1) or (i == f-1 and j == 0) or (i == f-1 and j == c-1);
}

//Función que crea la matriz con los rebotes
Matrix rebota (int f, int c) {
	Matrix M(f, Row(c, '.'));
	
	int i = 0, j = 0; //Posición
	int hor, ver; //Dirección
	
	M[0][0] = 'X'; //La X de la esquina superior izquierda
	
	while (not esquina(i, j, f, c)) { //Mientras no nos encontremos en una esquina
		
		//Miramos en qué dirección tiene que ir el alfil
		if (i == 0) ver = 1;
		if (i == f-1) ver = -1;
		if (j == 0) hor = 1;
		if (j == c-1) hor = -1;
		
		//Actualizamos la posición del alfil
		i += ver;j += hor;

		//Colocamos la X
		M[i][j] = 'X';
	}
	
	//Retornamos la matriz con los rebotes del alfil marcados
	return M;
}

//Función que imprime la matriz
void print(Matrix M, int f, int c) {
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) cout << M[i][j];
		cout << endl;
	}
	cout << endl;
}


int main () {
	int f, c;
	while (cin >> f >> c) {
		Matrix M = rebota(f, c);
		print(M, f, c);
	}
}
