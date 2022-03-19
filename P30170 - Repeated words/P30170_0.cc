#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    while (cin >> n) {

        if (n == 0) {
            cout << endl;
        }

        else {

            vector<string> paraules(n);
            vector<int> suma(n+1, 0);
            for (int i = 0; i < n; i++) {
                cin >> paraules[i];
            }

            sort(paraules.begin(), paraules.end());
            int repeticions = 1;
            for (int j = 1; j < n; j++) {
                if (paraules[j] == paraules[j - 1]) {
                    ++repeticions;
                } else {
                    //al vector suma hi han d'anar el num de lletres depen de cad repe de la paraula
                    suma[repeticions] += paraules[j - 1].size();
                    repeticions = 1;
                }
            }
            suma[repeticions] += paraules[n - 1].size();

            for (int t = 1; t <= n; t++) {
                if (suma[t] > 0) {
                    cout << t << " : " << suma[t] << endl;
                }
            }
            cout << endl;
        }
    }
}
