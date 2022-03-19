#include<iostream>
#include<vector>
using namespace std;

//Función para imprimir la permutación
void print(int n, const vector<int>& v) {
	for (int i = 0; i < n; i++) {
		if (i > 0) cout << ' ';
		cout << v[i];
	}
	cout << endl;
}

//Función que genera las permutaciones
void permutacions_chules (int n, vector<int>& numbers, vector<bool>& used, int k) {
	//Si hay una permutación completada, se imprime
	if (k == n) print(n, numbers); 
	
	//Si la permutación no está completa, se sigue generando
	else {
		for (int i = 0; i < n; i++) {
			//Si i aun no ha sido usado
			if (not used[i]) {
				//Comprovamos si cumple la condición
				if (k == 0 or i > numbers[k-1]+1 or i < numbers[k-1]-1) {
					
					//Si la cumple, lo añadimos a la permutación
					numbers[k] = i;
					//Lo marcamos como usado
					used[i] = true;
					//Hacemos la llamada recursiva
					permutacions_chules(n, numbers, used, k+1);

					//Lo marcamos com no usado, ya que las siguientes llamadas recursivas no lo habrán usado aún
					used[i] = false;
				}
			}
		}
	}
}

int main () {
	int n;
	
	while (cin >> n) {
		vector<int> numbers(n);
		vector<bool> used(n, false);
		
		permutacions_chules(n, numbers, used, 0);
		cout << "********************" << endl;
	}
}
