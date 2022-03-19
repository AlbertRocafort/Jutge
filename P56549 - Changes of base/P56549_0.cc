//Cambios de base - P56549
#include<iostream>
using namespace std;

void escriu_canvi_base(int n, int b) {
	
	if (n > 0) {
		escriu_canvi_base(n/b, b);
		
		int x = n%b;
		if (x > 9) cout << char('A' + x%10);
		else cout << x;
	}
}
	

int main () {
	int x;
	
	while (cin >> x) {
		cout << x << " = ";
		
		if (x == 0) cout << 0 << ", " << 0 << ", " << 0 << endl;
		
		else {
			escriu_canvi_base(x, 2);
			cout << ", ";
			
			escriu_canvi_base(x, 8);
			cout << ", ";
			
			escriu_canvi_base(x, 16);
			cout << endl;
		}		
	}
}
