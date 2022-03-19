#include<iostream>
using namespace std;

//Dividirem el rusc en 3 patrons diferents:
//  - La 1a fila té un patró que només el té ella, així que tindrà el seu propi patró
//  - Totes les files parells tenen el mateix patró
//  - Totes les files imparells tenen el mateix patró




//Funció que pinta el rusc de f files i c columnes
void pinta_rusc(int f,  int c) {
    

    //Bucle que itera pel nombre de files que té el dibuix que farem
    for (int i = 0; i < f * 2 + 1; i++) {   
        
        //Si la fila que estem dibuixant és la 1a (i == 0) pintarem només espais en blanc i '_' quan toqui
        if (i == 0) {

            //Haurem d'escriure c*4-2 caràcters.
            //De cada 4 caràcters impresos, el 2n és un '_', i els altres 3, espais en blanc
            for (int j = 0; j < c * 4 - 2; j++) {
                if (j % 4 == 1) cout << '_';
                else cout << ' ';
            }
            cout << endl;
        }
        


        //Quan toqui pintar una fila parell
        else if (i % 2 == 0) {

            //Haurem d'escriure c*4-1 caràcters.
            //De cada 4 caràcters impresos:
            //  - El 1n es un '\'
            //  - El 2n es un '_'
            //  - El 3r es un '/'
            //  - EL 4t es un ' '
            for (int j = 0; j < c * 4 - 1; j++) {
                if (j % 4 == 0) cout << '\\';
                else if (j % 4 == 1) cout << '_';
                else if (j % 4 == 2) cout << '/';
                else cout << ' ';
            }
            cout << endl;
        }
        


        //Quan toqui pintar una fila imparell
        else {

            //Haurem d'escriure c*4-1 caràcters.
            //De cada 4 caràcters impresos:
            //  - El 1n es un '/'
            //  - El 2n es un ' '
            //  - El 3r es un '\'
            //  - EL 4t es un '_'
            for (int j = 0; j < c * 4 - 1; j++) {
                if (j % 4 == 0) cout << '/';
                else if (j % 4 == 1) cout << ' ';
                else if (j % 4 == 2) cout << '\\';
                else cout << '_';
            }
            cout << endl;
        }
    }
}



//El main anira llegint les dades de la entrada i anirà fent les crides a la funció
//Haurem de vigilar que imprimeixi be els salts de linia entre els rusc
int main() {
    
    //Vars per llegir les files i columnes
    int f, c;

    //Var per imprimir correctament els salts de linia
    bool primer_rusc = true;


    //Mentre llegim dades a la entrada
    while (cin >> f >> c) {
        
        //Abans del 1r rusc no s'imprimira un salt de linia i es canviara el valor de "primer_rusc"
        //A partir del 2n rusc, s'imprimirà un salt de linia abans de dibuixar-lo
        if (primer_rusc) primer_rusc = false;
        else cout << endl;
        

        //Cridem a la funció que ens pinta el rusc
        pinta_rusc(f, c);
    }
}