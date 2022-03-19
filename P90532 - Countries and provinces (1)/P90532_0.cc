#include <iostream>
#include <vector>
using namespace std;

struct Provincia {
	string nom;
	string capital;
	int habitants;
    int area;
    double pib;
};

struct Pais {
	string nom;
	string capital;
	vector<Provincia> provs;
};

typedef vector<Pais> Paisos;

double pib(const Paisos& p, char c, double d) {
	int n = p.size();
	double suma = 0;
	
	for (int i = 0; i < n; i++) {
		if (p[i].nom[0] == c) {
			int m = p[i].provs.size();
			
			for (int j = 0; j < m; j++) {
				double h = p[i].provs[j].habitants, a = p[i].provs[j].area;
				if (h / a > d) suma += p[i].provs[j].pib;
			}
		}
	}
	
	return suma;
}
