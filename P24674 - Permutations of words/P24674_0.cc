#include <iostream>
#include <vector>
#include <string>
using namespace std;


void print(vector<string> v, int n) {
	cout << '(';
	for (int i = 0; i < n; i++) cout << (i ? "," : "") << v[i];
	cout << ')' << endl;
}

void genera (vector<string>& words, vector<string>& permutation, vector<bool>& used, int n, int k) {
	
	//Permutación acabada
	if (k == n) print(permutation, n);
	
	//Seguimos generando las permutaciones
	else {
		for (int i = 0; i < n; i++) {
			if (not used[i]) {
				permutation[k] = words[i];
				used[i] = true;
				genera(words, permutation, used, n, k+1);
				
				used[i] = false;
			}
		}
	}
}


int main () {
	int n;
	cin >> n;
	
	vector<string> words(n);		//Vector con las palabras
	vector<string> permutation(n);	//Vector con la permutación
	vector<bool> used(n, false);	//Vector dónde marcar si se ha usado cada palabra
	
	for (int i = 0; i < n; i++) cin >> words[i];
	
	genera(words, permutation, used, n, 0);
}
