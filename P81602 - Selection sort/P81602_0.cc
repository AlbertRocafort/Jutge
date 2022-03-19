#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int posicio_element_maxim(const vector<double>& v, int i)
{
    //Començo amb i=n, empenyo l'invariant cap a 0
    for (int j = i - 1; j >= 0; --j) {
        if (v[j] > v[i])
            i = j;
    }
    return i;
}

void ordena_per_seleccio(vector<double>& v, int m)
{
    //Buscar l'element més gran i posar-lo l'últim
    //m és la posició de l'últim element
    for (int i = m; i >= 0; --i) {
        //Mirar tots els elements, posar el més gran l'últim
        int max = posicio_element_maxim(v, i);
        swap(v[i], v[max]); //Poso l'element més gran a l'últim lloc
    }
}

int main()
{
    vector<double> v = { 2, 1, 7, 4, 3, 10 };
    int m = v.size() - 1;
    ordena_per_seleccio(v, m);
    for (double element : v)
        cout << element << endl;
}
