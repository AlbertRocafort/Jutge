#include <iostream>
using namespace std;

int main () {
	int pos, x, n = 0;
	bool trobat = false;
	cin >> pos;
	
	while (not trobat and cin >> x) {
		n++;
		if (n == pos) trobat = true;
	}
	
	
	if (trobat) cout << "A la posicio " << pos << " hi ha un " << x << '.' << endl;
	else cout << "Posicio incorrecta." << endl;
}
