#include<iostream>
using namespace std;

int main () {
	int n;
	cin >> n;
	bool primer = true;
	for (int i = 0; i <= n; i++) {
		if (primer) primer = false;
		else cout << ',';
		cout << i*i*i;
	}
	
	cout << endl;
}
