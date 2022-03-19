#include <iostream>
using namespace std;

bool es_any_de_traspas (int any) {
	
	bool x;
	
	if (any%4 != 0) {
		x = false;
	} else {
		if (any%100 != 0) {
			x = true;
		} else {
			if ((any/100)%4 == 0) {
				x = true;
			} else {
				x = false;
			}
		}
	}
	
	return x;
}

bool is_valid_date(int d, int m, int y) {

	bool x = false;

	if (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) {
		if (d > 0 and d < 32) {
			x = true;
		}
	} else if (m== 4 or m == 6 or m == 9 or m == 11) {
		if (d > 0 and d < 31) {
			x = true;
		}
	} else if (m == 2) {
		if (es_any_de_traspas(y)) {
			if (d > 0 and d < 30) {
				x = true;
			}
		} else {
			if (d > 0 and d < 29) {
				x = true;
			}
		}
	}
	
	return x;
}
