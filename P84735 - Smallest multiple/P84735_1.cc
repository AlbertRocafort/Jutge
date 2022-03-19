#include <iostream>
using namespace std;

int main () {
	int a, b, x = 1;
	
	while (cin >> a >> b) {
		int c = a/b;
		if (c*b != a) c++;
		c *= b;
		
		cout << '#' << x << " : " << c << endl;
		x++;
	}
}
