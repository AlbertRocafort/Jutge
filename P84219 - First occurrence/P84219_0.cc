/*#include <iostream>
#include <vector>
using namespace std;

//Trobar la 1a aparició de x en v
//v ordenat en ordre creixent (1,2,3,...)

int first_ocurrence_i (int inici, int final, double x, const vector<double>& v) {
	if (final < inici) return -1;
	
	int medio = (inici+final)/2;
	int aux = v[medio];
	if (aux > x) return first_ocurrence_i (inici, medio-1, x, v);
	if (aux < x) return first_ocurrence_i (medio+1, final, x, v);
	
	aux = medio;
	int aux2 = first_ocurrence_i (inici, medio-1, x, v);
	if (aux2 == -1) return aux;
	return aux2;
}

int first_occurrence(double x, const vector<double>& v) {
	return first_ocurrence_i (0, v.size()-1, x, v);
}


int main () {
	
}*/

#include <iostream>
#include <vector>
using namespace std;

int find(double x, const vector<double>& v, int left, int right){
    if(left > right) return -1; //Si ja s'ha revisat tot el vector es retorna -1
    if(left == right) {
        if(v[right] == x) return right;
        else return -1;
    }
    
    
    int n = (left + right) / 2;
    if(v[n] < x) return find(x, v, n+1, right);
    else return find(x, v, left, n);
}

int first_occurrence(double x, const vector<double>& v){ //Fem una funcio inmersiva
    return find(x, v, 0, v.size()-1);
}


int main() {
    vector<double> v{1,2,3,3,4,4,5,5,6,6,6,6,6,7};
    cout << first_occurrence(7,v) << endl;
    
    
    vector<double> v1{1};
    cout << first_occurrence(1,v1) << endl;
    
    
    vector<double> v2{1};
    cout << first_occurrence(7,v2) << endl;
}
