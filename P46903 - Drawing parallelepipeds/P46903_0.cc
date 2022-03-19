#include<iostream>
using namespace std;

int main() {
	
	int a, b, c;
	
	while (cin >> a >> b >> c) {
		
		//1r línia
		for (int i = 0; i < c; i++) cout << ' ';
		for (int i = 0; i <= a; i++) cout << '_';
		cout << endl;
		
		//Entre 1a i 2a horitzontals
		for (int i = 1; i < c; i++) {
			
			for (int j = 0; j < c-i; j++) cout << ' ';
			cout << '/';
			for (int j = 0; j < a; j++)cout << ' ';
			cout << '/';
			for (int j = 0; j < i-1; j++) cout << ' ';
			cout << '|' << endl;
		}
		
		//2a linia
		cout << '/';
		for (int i = 0; i < a; i++) cout << '_';
		cout << '/';
		for (int i = 1; i < c; i++) cout << ' ';
		cout << '|' << endl;
		
		//Entre la 2a i la esquina d'abaia a l'esquerra i darrera
		for (int i = 1; c+i <= b; i++) {
			
			cout << '|';
			for (int j = 0; j < a; j++) cout << ' ';
			cout << '|';
			for (int j = 1; j < c; j++) cout << ' ';
			cout << '|' << endl;
		}
		
		//Entre la esquina d'abaia a l'esquerra i darrera i la 3a horitzontal
		for (int i = 1; i < c; i++) {
			
			cout << '|';
			for (int j = 0; j < a; j++) cout << ' ';
			cout << '|';
			for (int j = 0; j < c-i; j++) cout << ' ';
			cout << '/' << endl;
		}
		
		//3a horitzontal
		cout << '|';
		for (int j = 0; j < a; j++) cout << '_';
		cout << '|' << '/' << endl;
		
		cout << endl;
	}
}









