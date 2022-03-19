#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


vector<int> crea_garbell() {
	
	vector<int> garbell(1000001, 0);
	garbell[1] = 1;
	
	// Iterem pels sqrt(1000001) primers nums
	for (int i = 2; i*i < 1000001; i++) {
		
		// Comprobem que i es un nombre primer
		if (garbell[i] == 0) {
			
			// Emplenem les caselles del garbell que pugem amb i
			for (int j = i * 2; j > 0 and j < 1000001; j += i) {
				if (garbell[j] == 0) garbell[j] = i;
			}
		}
	}
	
	return garbell;
}


int main() {
	
	vector<int> garbell = crea_garbell();
	
	int x;
	while (cin >> x) {
		
		int aux = x;
		int contador = 1;
		
		int aparicions_factor = 0;
		int factor = -1;
		
		while (aux > 1)	{
			
			int divisor;
			if (garbell[aux] != 0) divisor = garbell[aux];
			else divisor = aux;
			
			if (divisor == factor) {
				aparicions_factor++;
			}
			else {
				contador *= (aparicions_factor+1);
				factor = divisor;
				aparicions_factor = 1;
			}
			
			aux /= divisor;
		}
		
		contador *= (aparicions_factor+1);
		
		cout << contador << endl;
		
	}
	
}
