#include<iostream>
#include<set>
#include <string>
using namespace std;

struct ordena
{
	bool operator()(const string& a, const string& b) const
	{
		if (a.size() == b.size()) return a < b;
		return a.size() < b.size();
	}
};

int main () {
	
	int x = 0;
	string s = "Hi";
	
	while (s != "QUIT") {
		set<string> presentWords;
		set<string, ordena> missingWords;
		
		while (cin >> s && s != "END" and s != "QUIT") {
			set<string>::iterator it = presentWords.find(s);
			
			if (it != presentWords.end()) {
				presentWords.erase(it);
				missingWords.insert(s);
			} else {
				presentWords.insert(s);
				
				set<string, ordena>::iterator iter = missingWords.find(s);
				if (iter != missingWords.end()) missingWords.erase(iter);
			}
		}
		
		if(x++ > 0) cout << endl;
		cout << "GAME #" << x << endl << "HAS:" << endl;
		for(set<string>::iterator it = presentWords.begin(); it != presentWords.end(); it++) cout << *it << endl;
		cout << endl << "HAD:" << endl;
		for(set<string, ordena>::iterator it = missingWords.begin(); it != missingWords.end(); it++) cout << *it << endl;
	}
	
	
	
}
