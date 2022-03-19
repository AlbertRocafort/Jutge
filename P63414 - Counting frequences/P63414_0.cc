#include <iostream>
#include <vector>
using namespace std;

int main () {
	vector<int> v(1001);
	int n, x;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> x;
		v[x%10000]++;
	}
	
	for (int i = 0; i < 1001; i++) {
		if (v[i] != 0) cout << i + 1000000000 << " : " << v[i] << endl;
	}
}
