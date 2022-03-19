//Tractament en seqüència

//La clau per resoldre aquest problema és tenir dos variables per guardar els strings.

//De les dos primeres paraules que es llegeixen, es queda a s1 la que és més gran (alfabèticament),
//que és la que podria estar desposicionada i s’imprimeix la petita.

//En la 2a iteració es compara la gran de la iteració anterior amb la paraula que s’ha llegit.
//S’imprimeix la petita i es guarda la gran.

//Això es repeteix en totes les iteracions, i així t’assegures que quan et surt una paraula més gran del
//que toca, la guardes en s2 fins que és el moment de imprimir-la en el seu lloc.


#include<iostream>
using namespace std;

int main () {
	
	string s1, s2;
	
	//La llegim fora del bucle sino en la 1a iteració s1 estaria buit.
	cin >> s1;

	//Mentres no es troba el final es va iterant
	while (cin >> s2 and s2 != "END") {

		//Si la paraula que hem llegit és més petita que la que tenim guardad la imprimim
		if (s2 < s1) cout << s2 << endl;

		//Sinó, la guardem i imprimim la que teniem guardada
		else {
			cout << s1 << endl;
			s1 = s2;
		}
	}
	
	//Imprimim la última paraula que hem guardat, que serà la més gran de tota la seqüència.
	cout << s1 << endl;
}
