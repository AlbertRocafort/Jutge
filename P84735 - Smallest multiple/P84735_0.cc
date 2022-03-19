#include <iostream>
using namespace std;

int multiple_petit(int a, int b)
{
	int m = a / b;
	
	if (b*m != a) m++;
	return b*m;
}

int main()
{
    int a, b;
    int i = 1;
    while (cin >> a >> b) {
        cout << "#" << i << " : " << multiple_petit(a, b) << endl;
        ++i;
    }
}
