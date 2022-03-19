#include<iostream>
#include<set>
using namespace std;

int main () {
    string s;
    set<string> ss;
    set<string>::iterator it = ss.begin();
    int paraules = 0;
    
    while (cin >> s and s != "END") {
        ss.insert(s);
        paraules++;
        
        if (it == ss.end()) it--;
        else if (paraules % 2 == 1 and s > *it) it++;
        else if (paraules % 2 == 0 and s < *it) it--;
        
        cout << *it << endl;
    }
}

