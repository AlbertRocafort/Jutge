#include<iostream>
#include<vector>
using namespace std;

//La diagonal Ascendent de una casella es la suma de la seva fila i la seva columna
//La diagonal Descendent de una casella es c-f+(n-1)


void reines(vector<bool>& files, vector<bool>& diagonalsDescendents, vector<bool>& diagonalsAscendents, int& contador, int reina) {
	
	int n = files.size();
	
	if (reina == n) contador++;
	
	else {
		
		for (int i = 0; i < n; i++) {
			if (not files[i] and not diagonalsDescendents[reina-i+n-1] and not diagonalsAscendents[i+reina]) {
				files[i] = true;
				diagonalsDescendents[reina-i+n-1] = true;
				diagonalsAscendents[i+reina] = true;
				
				reines(files, diagonalsDescendents, diagonalsAscendents, contador, reina+1);
				
				files[i] = false;
				diagonalsDescendents[reina-i+n-1] = false;
				diagonalsAscendents[i+reina] = false;
			}
		}
	}
}


int main() {
	
	int n;
	cin >> n;
	
	vector<bool> files(n, false);
	vector<bool> diagonalsDescendents(2*n-1, false);
	vector<bool> diagonalsAscendents(2*n-1, false);
	
	
	int contador = 0;
	
	reines(files, diagonalsDescendents, diagonalsAscendents, contador, 0);
	cout << contador << endl;
}
