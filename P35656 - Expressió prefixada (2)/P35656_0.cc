#include<iostream>
using namespace std;

int maxim_de_3 (int a, int b, int c) {
	
	int max = a;
	if (b > a) max = b;
	if (c > max) max = c;
	
	return max;
}


int expressio () {
	
	char c;
	cin >> c;
	
	if (c >='0' and c <= '9') return c - '0';
	
	if (c == '-') return -expressio();
	if (c == '+') return expressio() + expressio();
	return maxim_de_3(expressio(), expressio(), expressio());
}


int main() {
	cout << expressio() << endl;
}
