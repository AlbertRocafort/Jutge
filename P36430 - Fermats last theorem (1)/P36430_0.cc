#include<iostream>
#include<cmath>
using namespace std;


void fermat (int a, int b, int c, int d) {
	
	bool solucio_trobada = false;
	
	for (int i = a; i <= b and not solucio_trobada; i++) {
		
		for (int j = c; j <= d and not solucio_trobada; j++) {
			
			double z = sqrt(i*i+j*j);
			if (z == (int)z) {
				solucio_trobada = true;
				cout << i << "^2 + " << j << "^2 = " << z << "^2" << endl;
			}
		}
	}
	
	if (not solucio_trobada) cout << "Sense solucio!" << endl;
}



int main () {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	fermat(a, b, c, d);
}
