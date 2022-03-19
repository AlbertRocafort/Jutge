#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<bool> > Matrix;

struct torre {
    int i;
    int j;
};

void caselles_amenacades(Matrix& tauler, const vector<torre>& torres)
{
    int f = tauler.size();
    int c = tauler[0].size();

    int n = torres.size();
    for (int i = 0; i < n; i++) {
        torre u = torres[i];
        //columnes
        for (int t = 0; t < f; t++) {
            tauler[t][u.j - 1] = false;
        }
        //files
        for (int j = 0; j < c; j++) {
            tauler[u.i - 1][j] = false;
        }
    }
}

int main()
{
    int f, c, t;
    while (cin >> f >> c >> t) {

        vector<bool> files(f, false);
        vector<bool> columnes(c, false);

		int filesLliures = f;
		int columnesLliures = c;

        for (int i = 0; i < t; i++) {
        	int x, y;
            cin >> x >> y;
            
            if (not files[x-1]) {
            	filesLliures--;
            	files[x-1] = true;
			}
            if (not columnes[y-1]) {
            	columnesLliures--;
            	columnes[y-1] = true;
			}
        }

        cout << filesLliures * columnesLliures << endl;
    }
}
