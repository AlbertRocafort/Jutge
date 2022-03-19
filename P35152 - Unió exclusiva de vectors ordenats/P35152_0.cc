//Seguirem la lògica de la funció de únio normal: Tindrem els dos vectors a ordenar, començarem amb dos índexs apuntant als primers elements dels vectors, i a partir d’allà decidirem si afegir cada un dels elements al vector final

//Hi ha 2 condicions que s’han de complir en el vector final:
//	1a: No hi ha d’haver-hi cap element que es trobi en els dos altres vectors
//		(Això ho controlarem amb un if(v1[i] == v2[j]))
//	2a: No hi ha d’haver nombres repetits
//		(Això ho solucionem fent que cada cop que s’afegeix o es descarta un num, s’avança el punter tants cops com vegades estigui repetit el num (while (1[i] == x) i++;))

#include<iostream>
#include<vector>
using namespace std;

vector<int> ex_union(const vector<int>& v1, const vector<int>& v2) {
	int i = 0, j = 0;
	vector<int> res;
	
	int n1 = v1.size();
	int n2 = v2.size();
	
	while (i < n1 and j < n2) {
		//Com que accedirem varis cops a aquestes posicions de memória, és més rentable guardarles en variables locals
		int x = v1[i];
		int y = v2[j];
		
		//Controlem la 1a condició
		if (x == y) {
			//Controlem la 2a condició amb els whiles
			while (v1[i] == x)i++;
			while (v2[j] == y)j++;
		}
		else if (x < y) {
			//Afegim l’element petit per asegurar que el vector resultant està ordenat
			res.push_back(v1[i]);
			while (v1[i] == x)i++;
		}
		else {
			//Afegim l’element petit per asegurar que el vector resultant està ordenat
			res.push_back(v2[j]);
			while (v2[j] == y)j++;
		}
	}


	
//Acabem d’afegir els elements del vector que no hem acabat d’afegir al vector final, tot vigilant de no afegir nombres repetits
while(i < n1) {
		int x = v1[i];
		res.push_back(x);
		while (v1[i] == x) i++;
	}
	while(j < n2) {
		int y = v2[j];
		res.push_back(y);
		while (v2[j] == y) j++;
	}
	
	return res;
}
