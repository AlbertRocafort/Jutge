#include<iostream>
#include<sstream>
#include<set>
using namespace std;

int main() {
	string s;
	
	while(getline(cin, s))
	{
		stringstream ss(s);
		set<int> nums;
		int x;
		
		while(ss >> x)
		{
			nums.insert(x);
		}
		
		int sec = 0;
		bool parell;
		
		set<int>::iterator it = nums.begin();
		if (it != nums.end())
		{
			if (*it % 2 == 0) parell = true;
			else parell = false;
			sec++;
		}
		
		for (; it != nums.end(); it++) {
			if ((parell == true and *it % 2 == 1) or (parell == false and *it % 2 == 0))
			{
				sec++;
				parell = !parell;
			}
		}
		
		cout << sec << endl;
	}
}
