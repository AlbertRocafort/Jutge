#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
	
	int n;
	
	while (cin >> n) {
		
		if (n <= 0) cout << 0 << endl;
		
		else {
			//Llegim els nums i l'ordenem
			vector<double> v(n);
			for (int i = 0; i < n; i++) cin >> v[i];
			sort(v.begin(), v.end());
			
			//Inicialitzacions
			int num_intervals = 1;
			double inici_interval = v[0];
			double final_interval = inici_interval+1;
			
			//Contem els intervals
			for (int i = 0; i < n; i++) {
				if (v[i] > final_interval) {
					
					inici_interval = v[i];
					final_interval = inici_interval+1;
					
					num_intervals++;
				}
			}
			
			//Mostrem els resultats per pantalla
			cout << num_intervals << endl;
		}
	}
}
