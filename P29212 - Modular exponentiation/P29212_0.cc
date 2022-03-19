#include<iostream>
using namespace std;

int f(int n, int k, int m) {
	if (k == 0) return 1;
	if (k == 1) return n % m;
	
	int x = f(n, k / 2, m);
	
	if (k % 2 == 0) return (x * x) % m;
	
	x = (x * x) % m;
	return (x * n) % m;
}

int main () {
	int n, k, m;

	while (cin >> n >> k >> m) cout << f(n, k, m) << endl;
}



