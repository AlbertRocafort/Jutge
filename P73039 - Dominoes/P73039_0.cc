#include <iostream>
#include <vector>
using namespace std;

//primera paraula A, última lletra paraula --> primera lletra següent paraula
//max 10 paraules
int main()
{
    int n; //nº de partides
    cin >> n;
    for (int i = 0; i < n; ++i) { //partides a tractar

        int comptador = 1; //primera paraula
        string paraula1;
        cin >> paraula1;
        bool partida_acabada = false;
        while (not partida_acabada and comptador < 10) {
            string paraula2;
            cin >> paraula2;
            comptador++;
            int n1 = paraula1.size() - 1;
            if (paraula1[n1] == paraula2[0])
                //segueix la partida
                paraula1 = paraula2;
            else {
                partida_acabada = true;
            }
        }
        //Falta llegir totes les paraules si la partida acaba abans
        if (comptador < 10) {
            for (int j = 0; j < 10 - comptador; ++j)
                cin >> paraula1;
        }
        //Escriure qui ha guanyat
        if (comptador == 10 and not partida_acabada)
            cout << "=" << endl;
        else if (comptador % 2 != 0)
            cout << "B" << endl; //A tira en posició senar
        else
            cout << "A" << endl;
    }
}

