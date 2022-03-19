#include<iostream>
#include<vector>
using namespace std;

//Cada número entre 1 i n puede aparecer hasta x veces
void genera(vector<int>& v, int n, int maxReps, int k, int utilizados) {
	
	//Multiset acabado
	if (utilizados == n) {
		cout << '{';
		for (int i = 0; i < k; i++) {
			if (i > 0) cout << ',';
			cout << v[i];
		}
		cout << '}' << endl;
	}
	
	
	else {
		//Sin usar el num
		genera(v, n, maxReps, k, utilizados+1);
		
		//Usando el numero i veces
		for (int i = 0; i < maxReps; i++) {
			v[k + i] = utilizados + 1;
			genera(v, n, maxReps, k + i + 1, utilizados+1);
		}
	}
}

int main () {
	int n, x;
	cin >> n >> x;
	vector<int> v(n*x);
	
	genera(v, n, x, 0, 0);
}
