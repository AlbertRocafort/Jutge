#include <iostream>
using namespace std;

int main () {
	int a;
	
	cin >> a;
	
	for (int i = 1; i <= a; i++) {
		for (int x = 0; x < i; x++) {
			cout << '*';
		}
		cout << endl;
	}
}
