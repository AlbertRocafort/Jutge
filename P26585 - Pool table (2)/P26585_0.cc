#include<iostream>
#include<vector>
using namespace std;

typedef vector<vector<bool> > Matrix;


bool es_cantonada(int i, int j, int f, int c) {
	if (i == 0 and j == 0) return true;
	if (i == 0 and j == c-1) return true;
	if (i == f-1 and j == 0) return true;
	if (i == f-1 and j == c-1) return true;
	
	return false;
}


int main() {
	
	int f, c;
	while (cin >> f >> c) {
		
		Matrix M(f, vector<bool>(c, false));
	
		int i = 0;
		int j = 0;
		int dir_hor = 1;
		int dir_ver = 1;
		
		bool cantonada_trobada = false;
		
		while (not cantonada_trobada) {
			
			M[i][j] = true;
			
			i = i + dir_ver;
			j = j + dir_hor;
			
			if (es_cantonada(i, j, f, c)) cantonada_trobada = true;
			
			//Paret de a dalt
			else if (i == 0) dir_ver = 1;
			//Parel de a baix
			else if (i == f-1) dir_ver = -1;
			//Paret de l'esquerra
			else if (j == 0) dir_hor = 1;
			//Paret de la dreta
			else if (j == c-1) dir_hor = -1; 
		}
		
		M[i][j] = true;
		
		
		for (int i = 0; i < c+2; i++) cout << '#';
		cout << endl;
		
		for (int i = 0; i < f; i++) {
			cout << '#';
			for (int j = 0; j < c; j++) {
				if (M[i][j]) cout << '0';
				else cout << ' ';
			}
			cout << '#' << endl;
		}
	
		for (int i = 0; i < c+2; i++) cout << '#';
		cout << endl;
		cout << endl;
	}
}
