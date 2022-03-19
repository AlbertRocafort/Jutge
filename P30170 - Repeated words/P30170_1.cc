#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	
	int n;
	while (cin >> n) {
		
		//Llegim les paraules i les ordenem
		vector<string> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		sort(v.begin(), v.end());
		
		vector<int> lletres(n+1, 0);
		
		string referencia = v[0];
		int repeticions = 1;
		for (int i = 1; i < n; i++) {
			
			if (v[i] == referencia) repeticions++;
			
			else {
				lletres[repeticions] += referencia.size();
				referencia = v[i];
				repeticions = 1;
			}
		}
		
		lletres[repeticions] += referencia.size();
		
		for (int i = 0; i <= n; i++) {
			if (lletres[i] != 0) cout << i << " : " << lletres[i] << endl;
		}
		
		cout << endl;
	}
}
