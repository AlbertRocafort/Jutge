#include <iostream>
#include <vector>
using namespace std;

//Diversos casos separats per una linia: Input
//Cada cas: 1. taula de traducci�, 26 car�ters (a - z)
//2. n�m n
//3. n l�nies de text xifrat


void traduir_escriure(const string& text, const string& traduccio)
{
    int n = text.size();
    for (int i = 0; i < n; ++i) { //Mirar cada car�cter del text
        if (text[i] == '_')
            cout << " ";
        else {
            //Comaprar el valor del text amb el de la traduccio
            bool trobat_valor = false;
            int j = 0;
            while (not trobat_valor) {
                if (text[i] == traduccio[j]) {
                    cout << char('a' + j); //lletra associada a la posici�
                    trobat_valor = true;
                }
                ++j;
            }
        }
    }
}

int main()
{
	string traduccio;
	
    while (cin >> traduccio) {
    	
	    int n;
	    cin >> n;
	    for (int i = 0; i < n; ++i) { //linies a traduir
	        string text;
	        cin >> text;
	        traduir_escriure(text, traduccio); //traduim la lina i l'escribim
	        cout << endl;
	    }
	    
	    cout << endl;
	}
}
