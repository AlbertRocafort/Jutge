#include<iostream>
#include<vector>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Matrix;

int main() {
	
	int f, c;
	bool primera = true;
	while (cin >> f >> c and f != 0 and c != 0) {
		
		if (primera) primera = false;
		else cout << endl;
		
		//Creem i llegim la matriu inicial
		Matrix M(f, Row(c));
		for (int i = 0; i < f; i++)
			for (int j = 0; j < c; j++)
				cin >> M[i][j];
		
		
		for (int i = 0; i < f; i++) {
			for (int j = 0; j < c; j++) {
				
				int bacteries_veines = 0;
				
				if (i > 0) {
					if (j > 0 and M[i-1][j-1] == 'B') bacteries_veines++;
					if (M[i-1][j] == 'B') bacteries_veines++;
					if (j < c-1 and M[i-1][j+1] == 'B') bacteries_veines++; 
				}
				
				if (j > 0 and M[i][j-1] == 'B') bacteries_veines++;
				if (j < c-1 and M[i][j+1] == 'B') bacteries_veines++;
				
				if (i < f -1) {
					if (j > 0 and M[i+1][j-1] == 'B') bacteries_veines++;
					if (M[i+1][j] == 'B') bacteries_veines++;
					if (j < c-1 and M[i+1][j+1] == 'B') bacteries_veines++; 
				}
				
				if (M[i][j] == '.') {
					if (bacteries_veines == 3) cout << 'B';
					else cout << '.';
				}
				else {
					if (bacteries_veines == 3 or bacteries_veines == 2) cout << 'B';
					else cout << '.';
				}
			}
			
			cout << endl;
		}
	}
}
