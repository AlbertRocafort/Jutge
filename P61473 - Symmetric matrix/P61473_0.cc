#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;

bool es_simetrica(const Matriu& m) {
	int n = m.size()/*, nn = n*/;
	
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (m[i][j] != m[j][i]) return false;
		}
		//nn--;
	}
	
	return true;
}

int main () {
	Matriu m(3, vector<int>(3));
	m[0][0] = 1;
	m[0][1] = 2;
	m[0][2] = 3;
	m[1][0] = 2;
	m[1][1] = 3;
	m[1][2] = 3;
	m[2][0] = 3;
	m[2][1] = 2;
	m[2][2] = 1;
	
	cout << es_simetrica(m) << endl;
}
