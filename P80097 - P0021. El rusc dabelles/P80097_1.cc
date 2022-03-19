#include <iostream>
using namespace std;

void pinta_rusc(int f, int c)
{
    cout << " ";
    for (int e = 1; e < c; ++e) { //Escriure les barres de dalt
        cout << "_   ";
    }
    cout << "_" << endl;

    for (int i = 0; i < f; ++i) { //Pintar f files
        for (int j = 0; j < c - 1; ++j) { //Pintar c-1 columnes de la manera següent (Part superior)
            cout << "/ \\_";
        }
        cout << "/ \\" << endl; //Última columna de la fila (Part superior)
        for (int j1 = 0; j1 < c - 1; ++j1) { //Pintar c-1 columnes de la manera següent (Part inferior)
            cout << "\\_/ ";
        }
        cout << "\\_/" << endl; //Última columna de la fila (Part inferior)
    }
}

int main()
{
    int f, c;
    bool primera_lectura = true;

    while (cin >> f >> c) {

    	if (primera_lectura) primera_lectura = false;
    	else cout << endl;

    	pinta_rusc(f, c);
    }
}
