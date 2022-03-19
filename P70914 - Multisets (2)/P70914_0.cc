#include<iostream>
#include<vector>
using namespace std;

//Resum enunciat:
//	Donar totes les posibles combinacions on apareixen els números entre 1 i n
//	Cada num ha d'apareixer com a mínim min_reps
//	Cada num ha d'apareixer com a mínim max_reps

//Organització:
//	Tindrem un vector per indicar quants cops apareix cada num en aquella combinació 
//	Si a la posició 4 tenim un 3, vol dir que el num 5 (4+1) apareix 3 cops en aquella combinació
//	Utilitzarem l'algorítme de generació per trobar totes les possibles combinacions


void print(const vector<int>& repeticions, int n) {
	cout << '{';
	bool primera = true;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < repeticions[i]; j++) {
			if (not primera)cout << ',';
			else primera = false;
			cout << i + 1;
		}
	}
	cout << '}' << endl;
}


void genera(int n, int min_reps, int max_reps,vector<int>& repeticions, int k) {
	if (k == n) print(repeticions, n);

	else {
		//Cada posició tindrà totes les possibles repeticions entre min_rep i max_reps
		for (int i = min_reps; i <= max_reps; i++){
			repeticions[k] = i;
			genera(n, min_reps, max_reps, repeticions, k+1);
		} 
	}
}


int main() {
	int n, min_reps, max_reps;
	cin >> n >> min_reps >> max_reps;
	vector<int> repeticions(n);

	genera(n, min_reps, max_reps, repeticions, 0);
}
