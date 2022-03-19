#include <cmath>
#include <iostream>
using namespace std;
//Donats 2*n numeros
//Posicio senar son escrits per A
//Posicio parrell son escrits per B
bool es_senar(int x)
{
    if (x % 2 == 0)
        return false;
    else
        return true;
}

int num_digits(int x)
{
    if (x < 10)
        return 1;
    else
        return 1 + num_digits(x / 10);
}

int digit_central(int x)
{
    //Dividir entre 2 el numero de digits de x
    //Mirar el modul 10 del resultat
    int aux = num_digits(x) / 2;
    int d = x / pow(10, aux);
    return d % 10;
}

void guanyador(int comptador)
{
    if (comptador % 2 == 0)
        cout << "A" << endl;
    else
        cout << "B" << endl;
}

int main()
{
    int x; //Num de numeros a llegir
	int num1; //Var per llegir els numeros
	int num; // 
	int comptador = 1; //
    bool partida_acabada = false;
    
    cin >> x; //Llegir el numero de num. que te cadascu
	
	//Legir el 1r num de l'Anna i contar els dígits que té
	cin >> num1;
    int d = digit_central(num1);
    
    //Comprobem si el 1r número té num de digits senar
    if (not es_senar(num_digits(num1))) {
        guanyador(comptador);
        partida_acabada = true;
    }
    
	//Iterem per cada num que hem de llegir
    while ((comptador <= 2 * x -1) and (not partida_acabada)) {
    	
    	//Llegim el nou num
        cin >> num;
        
        //Incrementem el num de paraules llegides
        ++comptador;
        
        //Si el num es 
        if (not es_senar(num_digits(num))) {
            guanyador(comptador);
            partida_acabada = true;
            //Mirar digit central
        } else if (d != digit_central(num)) {
                guanyador(comptador);
                partida_acabada = true;
        }
    }
    
    if (not partida_acabada)
        cout << "=" << endl;
}
