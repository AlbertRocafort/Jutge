#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenacio(const vector<int>& v1, const vector<int>& v2) {
	vector<int> v = v1;
	v.insert(v.end(), v2.begin(), v2.end());
	
	/*int n = v1.size() + v2.size();
	vector<int> v(n);
	
	v = v1;
	int x = 0;
	for (int i = v1.size(); i < n; i++) {
		v[i] = v2[x];
		x++;
	}
	*/
	return v;
}







int main () {
	vector<int> v1(2);
	vector<int> v2(3);
	
	v1[0] = 1;
	v1[1] = 2;
	v2[0] = 3;
	v2[1] = 4;
	v2[2] = 5;
	
	vector<int> v = concatenacio(v1, v2);
	for (int i = 0; i < 5; i++) cout << v[i] << endl;
}
