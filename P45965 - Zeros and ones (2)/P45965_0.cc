#include <iostream>
#include <vector>
using namespace std;

//Nos dan una n y una o. Tenemos que pintar las combinaciones de n-o ceros, y o unos.
void genera(vector<int>& v, int k, int n, int unos, int o) {
    //Combinación acabada
    if (k == n) {
        cout << v[0];
        for (int i = 1; i < n; i++) cout << ' ' << v[i];
        cout << endl;
    }
    
    //Se mira si se pueden poner más ceros
    if (k-unos < n-o){
        v[k] = 0;
        genera(v, k+1, n, unos, o);
    }
    
    //Se mira si se pueden poner más unos
    if (unos < o) {
        v[k] = 1;
        genera(v, k+1, n, unos+1, o);
    }
}


int main () {
    int n, o;
    cin >> n >> o;
    vector<int> v(n);
    
    //La llamada se hace con los siguientes parámetros:
    //El vector dónde colocaremos las combinaciones
    //n y o para indicar cuantos unos y ceros se pueden colocar
    //k = 0 indicando que aún no hemos colocado ningún elemento de la combinación
    //unos = 0 para indicar que aún no hemos puesto ningún uno en la combinación
    genera(v, 0, n, 0, o);
}
