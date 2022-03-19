//No sabem quantes lletres llegirem a la entrada, per lo que utilitzarem el “while (cin >> c)””


#include <iostream>
using namespace std;
 
int main(){

		//Inicialitzem les variables de posició en el punt (0,0)
	int x=0,y=0;

	//Mentres hi hagi caràcters a l'entrada seguirem iterant
	char c;
	while (cin >> c) {

		//Actualitzem la posició segons el caràcter que hi havia a la entrada
		if (c=='n') y--;
		else if (c=='s') y++;
		else if (c=='e') x++;
		else if (c=='w') x--;
	}

	cout << "(" << x << ", " << y << ")" << endl;
}
