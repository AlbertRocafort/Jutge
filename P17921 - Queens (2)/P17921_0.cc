#include<iostream>
#include<vector>
using namespace std;

//La diagonal Ascendent de una casella es la suma de la seva fila i la seva columna
//La diagonal Descendent de una casella es c-f+(n-1)


void escriure(const vector<int>& files) {
	
	int n = files.size();
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			
			if (files[i] == j) cout << 'Q';
			else cout << '.';
		}
		
		cout << endl;
	}
	cout << endl;
}


void reines(vector<int>& files, vector<bool>& diagonalsDescendents, vector<bool>& diagonalsAscendents, int reina) {
	
	int n = files.size();
	
	if (reina == n) escriure(files);
	
	else {
		
		for (int i = 0; i < n; i++) {
			if (files[i] == -1 and not diagonalsDescendents[reina-i+n-1] and not diagonalsAscendents[i+reina]) {
				files[i] = reina;
				diagonalsDescendents[reina-i+n-1] = true;
				diagonalsAscendents[i+reina] = true;
				
				reines(files, diagonalsDescendents, diagonalsAscendents, reina+1);
				
				files[i] = -1;
				diagonalsDescendents[reina-i+n-1] = false;
				diagonalsAscendents[i+reina] = false;
			}
		}
	}
}


int main() {
	
	int n;
	cin >> n;
	
	vector<int> files(n, -1);
	vector<bool> diagonalsDescendents(2*n-1, false);
	vector<bool> diagonalsAscendents(2*n-1, false);
	
	
	reines(files, diagonalsDescendents, diagonalsAscendents, 0);
}
