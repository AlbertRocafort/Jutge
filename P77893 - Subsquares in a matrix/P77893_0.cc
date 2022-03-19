//Ejercicio de examen.

#include<iostream>
#include<vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

bool comprovaSubmatriu(const Matrix& M, int i, int j) {
	//La posición i del vector indica si hemos encontrado el número i+1
	//Por ejemplo: Si nums[0] == true, significa que el número 1 ya ha sido encontrado.
	vector<bool> nums(9, false);
	for (int x = i; x < i+3; x++) {
		for (int y = j; y < j+3; y++) {
			//Si ya hemos encontrado el número que hay en la posición que analizamos, //retornamos false.
			if (nums[ M[x][y]-1 ]) return false;
			//Si no lo habíamos encontrado, lo marcamos.
			else nums[ M[x][y]-1 ] = true;
		}
	}
	//En ninguna de las 9 ejecuciones del bucle se ha encontrado un número repetido
	return true;
}

int main () {
	int f, c;
	
	while (cin >> f >> c) {
		Matrix M(f, Row(c));
		
		//Leemos la matriz
		for (int i = 0; i < f; i++)
			for (int j = 0; j < c; j++) cin >> M[i][j];
		
		//Contador de submatrices con los 9 números
		int subMatrius = 0;
		//Comprobamos por cada una de las submatrices si tienen los 9 números
		for (int i = 0; i < f-2; i++) {
			for (int j = 0; j < c-2; j++) {
				//Si los tienen aumentamos el contador
				if (comprovaSubmatriu(M, i, j)) subMatrius++;
			}
		}
		
		cout << subMatrius << endl;
	}
}
