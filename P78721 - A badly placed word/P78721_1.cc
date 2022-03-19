#include<iostream>
using namespace std;


int main () {
	
	string paraula_a_colocar;
	string s;
	
	cin >> paraula_a_colocar;
	
	while (cin >> s and s != "END") {
		if (s < paraula_a_colocar) cout << s << endl;
		else {
			cout << paraula_a_colocar << endl;
			paraula_a_colocar = s;
		}
	}
	
	cout << paraula_a_colocar << endl;
	
	
}
