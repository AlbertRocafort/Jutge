#include<iostream>
#include<vector>
using namespace std;

//Exercici:
//	Retorna el k-essim element mes gran, entre tots els de v1 i v2, tenint en compte elements repretits
//	v1 i v2 estan ordenats en ordre creixent

//Metode:
//	Sigui x el k-essim element mes gran, vol dir que hi ha k-1 elements més petits que x
//	Per tant, anem movent els indexs per v1 i v2, fins que el num d'elements que queden darrera dels dos indexs sumen k-1
//	Tindra un comportament semblant a la cerca binaria


int x;

//Crida recursiva
int selectRec(int k, const vector<int>& v1, const vector<int>& v2, int l1, int r1, int l2, int r2) {
	
	if (l1 >= r1) return v2[k-l1];
	if (l2 >= r2) return v1[k-l2];
	
	//Punt mig dels arrays
	int mid1 = (r1 + l1 -1) / 2;
	int mid2 = (r2 + l2 -1) / 2;
	
	
    //Hem de buscar pels seguents elements
    //Avancem un dels indexs esquerres
    if (mid1 + mid2 < k)
    {
    	//L'element del mig de l'array 1 es mes gran que el de l'array 2
    	//Avancem l'index esquerra del 2n vector
        if (v1[mid1] > v2[mid2]) return selectRec (k, v1, v2, l1, r1, mid2+1, r2);
        
        //L'element del mig de l'array 2 es mes gran que el de l'array 1
    	//Avancem l'index esquerra del 1r vector
        else return selectRec (k, v1, v2, mid1+1, r1, l2, r2);
    }
	
	//Hem de buscar pels elements anteriors
    //Retrassem un dels indexs drets
    else {
    	//L'element del mig de l'array 1 es mes gran que el de l'array 2
    	//Avancem l'index esquerra del 1r vector
    	if (v1[mid1] > v2[mid2]) return selectRec (k, v1, v2, l1, mid1, l2, r2);
    	
    	//L'element del mig de l'array 2 es mes gran que el de l'array 1
    	//Avancem l'index esquerra del 2n vector
        else return selectRec (k, v1, v2, l1, r1, l2, mid2);
	}
}


//Crida principal que crida a la recursiva
int select(int k, const vector<int>& v1, const vector<int>& v2) {
	return selectRec(k-1, v1, v2, 0, v1.size(), 0, v2.size());
}

int main() {
	
	vector<int> v1(5);
	vector<int> v2(4);
	
	v1[0] = 2;
	v1[1] = 3;
	v1[2] = 6;
	v1[3] = 7;
	v1[4] = 9;
	
	v2[0] = 1;
	v2[1] = 4;
	v2[2] = 8;
	v2[3] = 10;
	
	
	cout << select(1, v1, v2) << endl;
	cout << select(2, v1, v2) << endl;
	cout << select(3, v1, v2) << endl;
	cout << select(4, v1, v2) << endl;
	cout << select(5, v1, v2) << endl;
	cout << select(6, v1, v2) << endl;
	cout << select(7, v1, v2) << endl;
	cout << select(8, v1, v2) << endl;
	cout << select(9, v1, v2) << endl;
}
