#include<iostream>
using namespace std;

void calcula_divisors(int x) {
	
	if (x == 1) cout << " 1";
	
	else {
		int i = 1;
		while (i*i < x) {
			if (x % i == 0) cout << ' ' << i;
			i++;
		}
		
		if (i*i == x) cout << ' ' << i;		
		i--;
		
		while (i > 0) {
			if (x % i == 0) cout << ' ' << x/i;
			i--;
		}
	}
	
	cout << endl;
}

int main() {
	
	int x;
	while (cin >> x) {
		cout << "divisors de " << x << ":";
		calcula_divisors(x);
	}
}
