#include <iostream>
#include <vector>
#include <map>

using namespace std;

typedef vector<int> VE; 
typedef vector<VE> VVE;


int k_esim(int k, const VVE& V){
    map<int,int> min;
    
    for(int i = 0; i < V.size(); ++i){ //Per totes les files
        if(!V[i].empty()) min[V[i][0]] = i; //Si la fila no està buida, s'agafa el valor mes petit i es guarda en el mapa
    }
    
    pair<int,int> res;
    VE it(V.size(), 1); //Vector d'enters amb el tamany = nombre de files de V, i tot inicialitzat a 1
    
    while(k > 0) { //Iterem kk cops
    	
        res.first = min.begin()->first; 
        res.second = min.begin()->second;
        //Donem a res el valor del primer parell del mapa
        
        if(V[res.second].size() > it[res.second]) {
            int aux = V[res.second][it[res.second]++];
            min[aux] = res.second;
        }
        
        min.erase(min.begin());
        --k;
    }
    return res.first;
}

int main () {
	
}
