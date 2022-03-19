#include<iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		
		int num_anterior_2 = 0;
		int num_anterior = 0;
		int num = 0;
		
		int nums_llegits = 0;
		int num_parells_consecutius = 0;
		
		while (cin >> num and num != -1) {
			
			nums_llegits++;
			
			if (nums_llegits > 2) {
				
				if (num_anterior + num < num_anterior + num_anterior_2)
					num_parells_consecutius++;
					
				
			}
			
			num_anterior_2 = num_anterior;
			num_anterior = num;
		}
		
		cout << num_parells_consecutius << endl;
	}
}
