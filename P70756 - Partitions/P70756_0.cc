#include <iostream>
#include <vector>
using namespace std;

void print(const vector<string>& paraules, vector<int>& particions, int n, int p) {
	
	//Iterem per cada subconjunt
	for (int i = 0; i < p; ++i) {
		//Imprimim els elements del subconjunt i
		cout << "subconjunt " << i+1 << ": {";
		
		//string que ens ajudará a imprimir el resultat amb el format demanat
		string aux = "";
		
		//Busquem en el vector particions totes les paraules que formen part del subconjunt i
		for (int j = 0; j < n; ++j) {
			
			//Si la paraula j forma part del subconjunt i la imprimim
			if (particions[j] == i) {
				cout << aux << paraules[j];
				aux = ",";
			}
		}
		cout << "}" << endl;
	}
	cout << endl;
}

void genera(const vector<string>& paraules, int n, int p, vector<int>& particions, int k) {
	//Combinacio acabada
	if (k == n) print(paraules, particions, n, p);
	
	else {
		//Primer posem la paraula k en el subconjunt 0. Després en el 1....
		for (int i = 0; i < p; ++i) {
			particions[k] = i ;
			genera(paraules, n, p, particions, k+1);
		}
	}
}


int main() {
	int n;
	cin >> n;
	
	//Vector per guardar les paraules a repartir
	vector<string> paraules(n);
	for (int i = 0; i < n; i++) cin >> paraules[i];
	
	//Num de subconjunts
	int p;
	cin >> p;
	
	//En el vector particio indicarem en quin dels subconjunts pertany cada paraula
	vector<int> particions(n);
	
	genera(paraules, n, p, particions, 0);
}