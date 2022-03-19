#include<iostream>
#include<set>
#include <string>
using namespace std;

//Struct per a que el set s'ordeni com a nosaltres ens interesa
//Es igual que quan ho fem amb una funció amb el sort dels vectors, pero s'ha de ficar dins de un struct
struct ordena
{
	bool operator()(const string& a, const string& b) const
	{
		//S'ordena primer per llargada i despres en ordre lexicogràfic
		if (a.size() == b.size()) return a < b;
		return a.size() < b.size();
	}
};



int main () {
	
	//Var per imprimir el num del game
	int game = 0;

	//Var per llegir strings
	string s;
	
	do {

		//Els dos sets buits
		set<string> presentWords;
		set<string, ordena> missingWords;
		
		//Mentres no trobem les paraules "END" o "QUIT"
		while (cin >> s && s != "END" and s != "QUIT") {

			//Mirem si la paraula quehem llegit esta en el 1r set
			set<string>::iterator it = presentWords.find(s);
			
			//Si hi és, el borrem i l'afegim al 2n
			if (it != presentWords.end()) {
				presentWords.erase(it);
				missingWords.insert(s);
			}

			//Si no hi es, el fiquem i mirem que no hi sigui al 2n per si s'ha de borrar
			else {
				presentWords.insert(s);
				
				set<string, ordena>::iterator iter = missingWords.find(s);
				if (iter != missingWords.end()) missingWords.erase(iter);
			}
		}
		
		//Imprimim per pantalla els dos sets
		if(game++ > 0) cout << endl;
		cout << "GAME #" << game << endl << "HAS:" << endl;
		for(set<string>::iterator it = presentWords.begin(); it != presentWords.end(); it++) cout << *it << endl;
		cout << endl << "HAD:" << endl;
		for(set<string, ordena>::iterator it = missingWords.begin(); it != missingWords.end(); it++) cout << *it << endl;
	
	} while (s != "QUIT");
}