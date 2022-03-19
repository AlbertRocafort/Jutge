#include <iostream>
using namespace std;

int main () {
	int cont = 0, curtes = 0, mitjanes = 0, llargues = 0;
	char c;
	bool fi = false;
	
	while (not fi) {
		cin >> c;
		if (c == '-' or c == '.') {
			if (cont > 0 and cont < 5) curtes++;
			else if (cont > 4 and cont < 10) mitjanes++;
			else if (cont > 9) llargues++;
			cont = 0;
			if (c == '.') fi = true;
		}
		else {
			cont++;
		}
	}
	
	cout << curtes << ',' << mitjanes << ',' << llargues << endl;
}
