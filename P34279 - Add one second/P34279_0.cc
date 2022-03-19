#include <iostream>
using namespace std;

int main () {
  float h, m, s;
  
  cin >> h >> m >> s;
  
	if ( h<=23 and m<=59 and s<=59) {
		s++;
	} 
	if (s==60) {
		m=m+1;
		s=0;
	}
	if (m==60) {
		h++;
		m=00;
	}
	if (h==24) {
	    h=00;
	}
	if (s<=9 and m<=9 and h<=9) {
	    cout <<"0"<< h << ":" <<"0"<< m << ":" <<"0"<< s << endl;
	}
	if (s<=9 and m>9 and h<=9) {
	        cout <<"0"<< h << ":" << m << ":" <<"0"<< s << endl;      
	    }
	if (s>9 and m<=9 and h<=9) {
	    cout <<"0"<< h << ":" <<"0"<< m << ":" << s << endl; 
	}
	if (s>9 and m>9 and h<=9) {
	    cout <<"0"<< h << ":" << m << ":" << s << endl;
	}
	if (s<=9 and m>9 and h>9) {
	    cout << h << ":" << m << ":" <<"0"<< s << endl;      
	} 
	if (s>9 and m<=9 and h>9) {
        cout << h << ":" <<"0"<< m << ":" << s << endl; 
	}
    if (s>9 and m>9 and h>9) {
        cout << h << ":" << m << ":" << s << endl;
	}
	if (s<=9 and m<=9 and h>9) {
	    cout << h << ":" <<"0"<< m << ":" <<"0"<< s << endl;
	}
}
