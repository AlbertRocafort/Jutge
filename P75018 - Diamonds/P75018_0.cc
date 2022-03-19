#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool MS (int V, const vector<int>& v) {
	int left = 0, right = v.size() - 1;
	
	while (left < right) {
		int valor = v[left]+v[right];
		
		if (valor < V) left++;
		else if (valor > V) right--;
		else return true;
	}
	
	return false;
}

int main () {
	int V, n;
	
	while (cin >> V >> n and (V != 0 or n != 0)) {
		vector<int> v(n);
		
		for (int i = 0; i < n; i++) cin >> v[i];
		
		sort(v.begin(), v.end());
		
		if (MS(V, v)) cout << "married" << endl;
		else cout << "single" << endl;
	}
}
