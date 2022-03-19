#include<iostream>
#include<queue>
#include<iomanip>
#include<climits>
using namespace std;


int main () 
{
	priority_queue<int, vector<int>, greater<int> > nya;
	string s;
	int nums = 0, max = INT_MIN;
	double sum = 0;
	
	
	while (cin >> s) 
	{
		if (s == "number") 
		{
			int x;
			cin >> x;
			nya.push(x);
			nums++;
			sum += x;
			if (x > max) max = x;
			
			cout << "minimum: " << nya.top() << ", maximum: " << max << ", average: " << std::fixed << std::setprecision(4) << sum/nums << endl;
		} 
		else 
		{
			if (nya.empty()) cout << "no elements" << endl;
			else 
			{
				sum -= nya.top();
				nya.pop();
				nums--;
				if (nya.empty()) 
				{
					cout << "no elements" << endl;
					max = INT_MIN;
				}
				else
				{
					cout << "minimum: " << nya.top() << ", maximum: " << max << ", average: " << sum/nums << endl;
				}
			}
		}
	}
	
}
