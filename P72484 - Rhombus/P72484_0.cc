#include <iostream>
using namespace std;

int main () {
	int a;
	
	cin >> a;
	
	for (int i = 1; i <= a; i++) {
		
		for (int x = 0; x < a - i; x++) {
			cout << ' ';
		}

		for (int x = 0; x < i; x++) {
			cout << '*';
		}
		for (int x = 1; x < i; x++) {
			cout << '*';
		}
		cout << endl;
	}

	for (int i = a - 1; i > 0; i--) {
		
		
		for (int x = 0; x < a - i; x++) {
			cout << ' ';
		}

		for (int x = 0; x < i; x++) {
			cout << '*';
		}
		for (int x = 1; x < i; x++) {
			cout << '*';
		}
		cout << endl;
	}
}
