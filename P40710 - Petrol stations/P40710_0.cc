//Resum de l’enunciat:
//Amb el tanque ple es podem fer x km
//Sabem la posició de n gasolineres
//Comencem amb el tanque ple
//Num min de parades per fer D km?

//Organització de la funció genera:
//Podem evitar passar per la estació i si podem arribar a la i+1 o a D sense pararnos en i
//Si no podem evitar pararnos, augmentem en 1 les estacions visitades i modifiquen les dades que calguin

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//gasolineres = posicions de les gasolineres
//n = num de gasolineres
//D = posició a la que hem d’arribar
//x = km que podem fer amb el tanque ple
//num_estacions = quantitat d’estacions ens les que ens hem d’aturar de les evaluades
//pos_ultima_estacio = posició en la que es troba la última estació en que ens hem parat. Si no ens hem parat en cap, val 0.
//k = gasolinera que evaluem si ens hem de parar o no
void genera(const vector<int>& gasolineres, int n, int D, int x, int& num_estacions, int pos_ultima_estacio, int k) {
	
	if (k < n) {
		//No hem de passar per la gasolinera si podem arribar a la seguent o a D sense parar
		//Comprovem que k+1 < n pq després accedim a gasolineres[k+1]
		if ((pos_ultima_estacio + x >= D) or (k+1 < n and pos_ultima_estacio + x >= gasolineres[k+1])) {
		//No hem parat en la estació
			genera(gasolineres, n, D, x, num_estacions, pos_ultima_estacio, k+1);
		}
		
		//En aquest cas, serà necessari parar-nos
		else {
			num_estacions++;
			genera(gasolineres, n, D, x, num_estacions, gasolineres[k], k+1);
		}
	}
}





int main () {
	int x, D, n;
	
	while (cin >> x >> D >> n) {
		//Vector amb les posicions de les gasolineres
		//IMPORTANT: Ordenar el vector un cop llegit
		vector<int> gasolineres(n);
		for (int i = 0; i < n; i++) cin >> gasolineres[i];
		sort(gasolineres.begin(), gasolineres.end());
		
		int num_estacions = 0;
		genera(gasolineres, n, D, x, num_estacions, 0, 0);
		
		cout << num_estacions << endl;
	}
}
