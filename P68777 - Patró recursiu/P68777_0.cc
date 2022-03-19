//Recursivitat i patrons

//Com vam veure en els altres exercicis de patrons, el primer pas abasnde possar-nos a programar
//és desxifrar el patró.


//input = ‘a’
//output = ‘a’
//patro(‘a’) = ‘a’

//input = ‘b’
//output = “bab”
//patro(‘b’) = ‘b’ + patro(‘a’) + ‘b’

//input = ‘c’
//output = “cbabcbabc”
//patro(‘c’) = ‘c’ + patro(‘b’) + ‘c’ + patro(‘b’) + ‘c’

//input = ‘d’
//output = “dcbabcbabcdcbabcbabcdcbabcbabcd”
//patro(‘d’) = ‘d’ + patro(‘c’) + ‘d’ + patro(‘c’) + ‘d’ + patro(‘c’) + ‘d’



//input = 1a lletra (a) -> S’imprimeix 1 cop ‘a’
//input = 2a lletra (b) -> S’imprimeix 2 cops ‘b’ i 1 cop patró de ‘a’
//input = 3a lletra (c) -> S’imprimeix 3 cops ‘c’ i 2 cops patró de ‘b’

//Segons la lletra que s’entra, més cops es repeteix ella i els patrons


#include<iostream>
using namespace std;

//Funció que dibuixa el patró
void patro (char c) {

	//Com que la lletra s’escriu 1 cop més que el patró de c-1, s’escriu 1 cop fora del bucle
	cout << c;
	
	//Quan més gran sigui la lletra més cops es repetirà el bucle
	for (int i = 0; i < c-'a'; i++) {
		patro(c-1);
		cout << c;
	}
}



//Programa principal
int main () {
	char c;
	cin >> c;
	patro(c);
	cout << endl;
}


//Fixeu-vos en el “cout << endl;” que hi ha en el main. No és molt comú fer-ho d’aquesta manera, ja
//que això sol anar dins la funció que pinta el patró, però com que en aquest cas és complicat
//introduir-hi aquesta sentència, la posem en el main.
