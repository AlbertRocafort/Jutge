#include <iostream>
using namespace std;

int suma_digits (int x) {
	
	int suma = 0;
	while (x != 0) {
		suma += x % 10;
		x /= 10;
	}
	return suma;
}

bool es_primer (int n) {
	bool primer = true;
    if (n < 2) primer = false;
    else {
        for (int i = 2; i*i <= n and primer; ++i) {
            if (n%i == 0) primer = false;
        }
    }
    return primer;
}

bool es_primer_perfecte (int n) {
	bool primer = es_primer(n);
	
	if (!primer or n<10) {
		return primer;
	} else {
		return es_primer_perfecte(suma_digits(n));
	}
	
}


int main () {
	cout << "977: " << es_primer_perfecte(977) << endl;
	cout << "978: " << es_primer_perfecte(978) << endl;
	cout << "0: " << es_primer_perfecte(0) << endl;
	cout << "11: " << es_primer_perfecte(11) << endl;
	cout << "1: " << es_primer_perfecte(1) << endl;
	cout << "25: " << es_primer_perfecte(25) << endl;
}
