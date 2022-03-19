#include<iostream>
using namespace std;

int main () {
	
	int n;
	bool primera_iteracio = true;
	
	while (cin >> n) {
		
		if (primera_iteracio) primera_iteracio = false;
		else cout << endl;
		
		for (int i = 0; i < n; i++){
			
			for (int j = 0; j <= i; j++) {
				cout << (n-i-1)%10;
			}
					
			for (int j = i+1; j < n; j++) {
				cout << (n-j-1)%10;
			}
			
			cout << endl;
		}
	}
}
