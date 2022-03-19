#include<iostream>
#include<vector>
using namespace std;

int main() {
	
	int n;
	while (cin >> n) {
		
		vector<int> nums(n);
		for (int i = 0; i < n; i++)
			cin >> nums[i];
		
		int index_prefix = 1;
		int index_sufix = n-2;
		int suma_prefix = nums[0];
		int suma_sufix = nums[n-1];
		
		while (suma_prefix != suma_sufix) {
			
			//Agafem un altre num pel sufix
			if (suma_prefix > suma_sufix) {
				suma_sufix += nums[index_sufix];
				index_sufix--;
			}
			
			//Agafem un altre num pel prefix
			else {
				suma_prefix += nums[index_prefix];
				index_prefix++;
			}
		}
		
		//suma_prefix == suma_sufix
		cout << index_prefix << endl;
	}
}
