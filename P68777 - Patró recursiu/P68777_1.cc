#include<iostream>
using namespace std;


void patro (char c) {
	
	cout << c;
	
	for (int i = 0; i < c-'a'; i++) {
		patro(c-1);
		cout << c;
	}
}


int main () {
	char c;
	cin >> c;
	patro(c);
	cout << endl;
}
