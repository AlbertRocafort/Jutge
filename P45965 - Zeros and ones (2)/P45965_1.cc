#include <iostream>
#include <vector>
using namespace std;



void genera(vector<int>& v, int k, int n, int unos, int o) {
	
	if (k == n) {
		cout << v[0];
		for (int i = 1; i < n; i++) cout << ' ' << v[i];
		cout << endl;
	}
	
	//Si puedo poner mas zeros
	if (k-unos < n-o){
		v[k] = 0;
		genera(v, k+1, n, unos, o);
	}
	
	//Si puedo poner mas unos
	if (unos < o) {
		v[k] = 1;
		genera(v, k+1, n, unos+1, o);
	}
}






int main () {
	int n, o;
	cin >> n >> o;
	vector<int> v(n);
	
	genera(v, 0, n, 0, o);
}
