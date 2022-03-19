#include<iostream>
#include<vector>
#include<string>
using namespace std;

void print(vector<char> v, int n) {
	for (int i = 0; i < n; i++) cout << v[i];
	cout << endl;
}

void genera(vector<char>& characters, vector<bool>& used, int n, int k) {
	//Combinación acabada
	if (k == n) print(characters, n);
	
	//Seguimos haciendo las combinaciones
	else {
		for (int i = 0; i < n; i++) {
			//Si no se ha usado
			if (not used[i]) {
				//Si cumple la condición
				if (k == 0 or characters[k-1] != 'a'+i-1) {
					characters[k] = 'a'+i;
					used[i] = true;
					genera(characters, used, n, k+1);
					
					used[i] = false;
				}
			}
		}
	}
}


int main () {
	int n;
	cin >> n;
	
	vector<char> characters(n);
	vector<bool> used(n, false);
	
	genera(characters, used, n, 0);
}
