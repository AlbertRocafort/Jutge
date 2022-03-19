#include <iostream>
using namespace std;

int mcd(int a, int b) {
	while (a > 0 and b > 0) {
		if (a > b) a = a % b;
		else b = b % a;
	}
	
	if (a == 0) return b;
	return a;
}

int main () {
	cout << mcd(66, 12) << endl;
	cout << mcd(100, 21) << endl;
	cout << mcd(0, 10) << endl;
}
