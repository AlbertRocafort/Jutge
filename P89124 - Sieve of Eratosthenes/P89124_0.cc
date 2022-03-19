#include <iostream>
#include <vector> 
using namespace std;

vector<bool> crea_garbell() {
	vector<bool> v(1000001, true);
	v[0] = v[1] = false;
	
	for (int i = 2; i*i < 1000001; i++) {
		for (int j = i * 2; j < 1000001; j += i) v[j] = false;
	}

	return v;
}

int main () {
	vector<bool> v = crea_garbell();
	int x;
	
	while (cin >> x) {
		if (v[x]) cout << x << " es primer" << endl;
		else cout << x << " no es primer" << endl;
	}
	
}
