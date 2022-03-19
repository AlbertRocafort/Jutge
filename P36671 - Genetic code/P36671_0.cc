#include<iostream>
#include<vector>
using namespace std;

typedef vector<string> V;
typedef vector<V> M2; //Matriu
typedef vector<M2> M3; //"Matriu tridimensional"

//En la matriu tridimensional hi guardarem els aminoacids
//Essent M3[i][j][z]:
//	La i indica la 1a lletra (A = 0, C = 1, G = 2, U = 3)
//	La j indica la 2a lletra
//	La z indica la 3a lletra


string traduccio(const M3& amino_acids, char c1, char c2, char c3) {
	
//Primer traduim les 3 lletres als nums que lis corresponen
//A -> 0, C->1, G->2, U->3
	int x, y, z;
	
	if (c1 == 'A') x = 0;
	else if (c1 == 'C') x = 1;
	else if (c1 == 'G') x = 2;
	else if (c1 == 'U') x = 3;
	
	if (c2 == 'A') y = 0;
	else if (c2 == 'C') y = 1;
	else if (c2 == 'G') y = 2;
	else if (c2 == 'U') y = 3;
	
	if (c3 == 'A') z = 0;
	else if (c3 == 'C') z = 1;
	else if (c3 == 'G') z = 2;
	else if (c3 == 'U') z = 3;
	
	//Retornem l’aminoacid que correspon a la traduccio
	return amino_acids[x][y][z];
}









//Procediment que s’executa 1 cop per emplenar la Matriu tridimensional amb els aminoacids corresponents a cada traduccio
void crea_traduccions(M3& amino_acids) {
	amino_acids[0][0][0] = "Lys";
	amino_acids[0][0][1] = "Asn";
	amino_acids[0][0][2] = "Lys";
	amino_acids[0][0][3] = "Asn";
	amino_acids[0][1][0] = "Thr";
	amino_acids[0][1][1] = "Thr";
	amino_acids[0][1][2] = "Thr";
	amino_acids[0][1][3] = "Thr";
	amino_acids[0][2][0] = "Arg";
	amino_acids[0][2][1] = "Ser";
	amino_acids[0][2][2] = "Arg";
	amino_acids[0][2][3] = "Ser";
	amino_acids[0][3][0] = "Ile";
	amino_acids[0][3][1] = "Ile";
	amino_acids[0][3][2] = "Met";
	amino_acids[0][3][3] = "Ile";
	
	amino_acids[1][0][0] = "Gln";
	amino_acids[1][0][1] = "His";
	amino_acids[1][0][2] = "Gln";
	amino_acids[1][0][3] = "His";
	amino_acids[1][1][0] = "Pro";
	amino_acids[1][1][1] = "Pro";
	amino_acids[1][1][2] = "Pro";
	amino_acids[1][1][3] = "Pro";
	amino_acids[1][2][0] = "Arg";
	amino_acids[1][2][1] = "Arg";
	amino_acids[1][2][2] = "Arg";
	amino_acids[1][2][3] = "Arg";
	amino_acids[1][3][0] = "Leu";
	amino_acids[1][3][1] = "Leu";
	amino_acids[1][3][2] = "Leu";
	amino_acids[1][3][3] = "Leu";
	
	amino_acids[2][0][0] = "Glu";
	amino_acids[2][0][1] = "Asp";
	amino_acids[2][0][2] = "Glu";
	amino_acids[2][0][3] = "Asp";
	amino_acids[2][1][0] = "Ala";
	amino_acids[2][1][1] = "Ala";
	amino_acids[2][1][2] = "Ala";
	amino_acids[2][1][3] = "Ala";
	amino_acids[2][2][0] = "Gly";
	amino_acids[2][2][1] = "Gly";
	amino_acids[2][2][2] = "Gly";
	amino_acids[2][2][3] = "Gly";
	amino_acids[2][3][0] = "Val";
	amino_acids[2][3][1] = "Val";
	amino_acids[2][3][2] = "Val";
	amino_acids[2][3][3] = "Val";
	
	amino_acids[3][0][0] = "Stop";
	amino_acids[3][0][1] = "Tyr";
	amino_acids[3][0][2] = "Stop";
	amino_acids[3][0][3] = "Tyr";
	amino_acids[3][1][0] = "Ser";
	amino_acids[3][1][1] = "Ser";
	amino_acids[3][1][2] = "Ser";
	amino_acids[3][1][3] = "Ser";
	amino_acids[3][2][0] = "Stop";
	amino_acids[3][2][1] = "Cys";
	amino_acids[3][2][2] = "Trp";
	amino_acids[3][2][3] = "Cys";
	amino_acids[3][3][0] = "Leu";
	amino_acids[3][3][1] = "Phe";
	amino_acids[3][3][2] = "Leu";
	amino_acids[3][3][3] = "Phe";
}


int main () {
	M3 amino_acids(4, M2(4, V(4)));
	crea_traduccions(amino_acids);
	
	char c1, c2, c3;
	
	//Llegim caracter a caracter fins trobar un "AUG" que indica que comencem a llegir aminoacids
	cin >> c1 >> c2 >> c3;
	while (c1 != 'A' or c2 != 'U' or c3 != 'G') {
		c1 = c2;
		c2 = c3;
		cin >> c3;
	}
	
	bool stop = false; //Boolea que indica quan es troba una combinació que equival a un Stop
	int cont = 0; //Contador perque cada 26 aminoacids s’escrigui un salt de linia
	
	//Mentres no trobem la combinacio que indica que parem
	while (not stop) {
		//Llegim 3 lletres més i les traduim
		cin >> c1 >> c2 >> c3;
		string aux = traduccio(amino_acids, c1, c2, c3);
		
		if (aux == "Stop") {
			stop = true;
			cout << endl;
		}
		
		else {
			cout << aux;
			cont++;
			if (cont == 26) {
				cout << endl;
				cont = 0;
			}
		}
	}	
}
