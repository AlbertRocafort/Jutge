#include <iostream>
#include <vector>
using namespace std;

int main () {
	int n;
	
	while (cin >> n) {
		vector<int> vec(n);
		int suma = 0;
		bool nya = false;
		
		for (int i = 0; i < n; i++) {
			cin >> vec[i];
			suma += vec[i];
		}
		
		int i = 0;
		while (i < n and !nya) {
			if (vec[i] == suma - vec[i]) nya = true;
			i++;
		}
		
		if (nya) cout << "YES" << endl;
		else cout << "NO" << endl;
		
	}
}
