#include <iostream>
#include <vector>
using namespace std;

//donat n i la base b
//n �s prim si els seus digits en base b son < que b/2
bool es_prim(int n, int b)
{
    if (n == 0) return true; //Hem mirat tots els d�gits i no ha retornat false
    
    //el d�git no �s m�s petit que b/2
    if (n % b >= b/2) return false;
        
    return es_prim(n / b, b);
}

int main()
{
    int n, b;
    cin >> n >> b;
    //passar n a base b i comprovar que cada d�git sigui menor a b/2
    if (not es_prim(n, b))
        cout << "N";
    else
        cout << "S";
}
