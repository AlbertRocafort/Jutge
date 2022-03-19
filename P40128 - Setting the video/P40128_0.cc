#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;

//Alies
typedef pair<int, int> capitol;

//Struct per fer les comparacions
struct comp {
	bool operator()(const pair<int, int>& x, const pair<int, int>& y) const {
		if (x.second != y.second) return x.second < y.second;
		return x.first < y.first;
	}
};


int calcula_intervals(int n) {
	
	vector<capitol> v(n);
	for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
	sort(v.begin(), v.end(), comp());
	
	int final_capitol = v[0].second;
	int capitols = 1;
	
	for (int i = 1; i < n; i++) {
		if (v[i].first > final_capitol) {
			capitols++;
			final_capitol = v[i].second;
		}
	}
	
	return capitols;
}



int main () {
	
	int n;
	while (cin >> n) {
		if (n <= 0) cout << 0 << endl;
		else cout << calcula_intervals(n) << endl;
	}
}
