#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
 
int main()
{
    int c = 0; // case
    int start, end;
 
    while(cin >> start >> end && (start || end))
    {
        int n;
        cin >> n;
 
        vector<pair<int, int> > input(n);
        vector<pair<int, int> > time;
 
        for(pair<int, int>& p : input)
        {
            char j;
            cin >> p.first >> j >> p.second;
        }
 
        sort(input.begin(), input.end());
 
        for(pair<int, int>& p : input)
        {
            if(time.size() > 0 && time[time.size() - 1].second > p.first)
            {
                time[time.size() - 1].second = max(time[time.size() - 1].second, p.second);
            }
            else
            {
                time.push_back(p);
            }
        }
 
        int count = 0;
        int x0 = start;
 
        for(const pair<int, int>& p : time)
        {
            count += (p.first - x0) / 8;
            x0 = p.second;
        }
 
        count += (end - x0) / 8;
 
        std::cout << "#" << ++c << ": " << count * 8 << std::endl;
    }
}
