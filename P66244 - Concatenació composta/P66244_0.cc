//Funcions i Tractament en Seqüència

//Primer de tot, per poder resoldre aquest exercici, és molt important saber-se la funció per comprovar
//si un nombre és primer. És important perqué si es comproven més números dels que toca, saltarà la
//bomba del Jutge. Bàsicament, s’ha de saber 2 coses:
//	- Per definició, el 0 i el 1 no són primers
// 	- Per certes demostracions matemàtiques, no hi ha cap divisor de n més gran que la seva
//	  arrel quadrada. (Molt important pel nombre de iteracions del bucle)



#include<iostream>
using namespace std;

//Funció que retorna cert si el nombre que li arriba és un primer
bool es_primer (int x) {
	
	//Els valors 0 i 1 no són primers per definició
	if (x < 2) return false;
	    
	//Només comprovem fins la arrel quadrada de n
	for (int i = 2; i*i <= x; ++i) {
		if (x%i == 0) return false;
	}
	    
   	//Si no s'ha trobat cap múltiple, és primer
	return true;
}


//Funció per concatenar dos nombres. Es multiplica x * 10 tants cops com dígits té y, i després es
//sumen
int concatenacio (int x, int y) {
	
	//Utilitzem un enter auxiliar per no modificar y, i poder fer la suma al final
	int aux = y;
	
	//Per poder concatenar també si y = 0, primer fem una múltiplicació i possem com a condició
	//del bucle que aux valgui 10 o més
	x = x * 10;
	while (aux > 9) {
		aux = aux / 10;
		x = x * 10;
	}
	
	return x + y;
}


int main () {
	
	//Variables per guardar els números a concatenar
	int primer_num, segon_num;

	//Variable per deixar de llegir si ja s’ha trobat una concatenació que forma un compost
	bool compost_trobat = false;
	
	//Llegim el primer nombre fora del bucle, perqué si no ho fessim, en la 1a iteració,
	//primer_num no tindria res guardat.
	cin >> primer_num;
	while (not compost_trobat and cin >> segon_num) {
		
		//Guardem la concatenació en una variable
		int c = concatenacio(primer_num, segon_num);
		
		//Si és un nombre compost, s’imprimeix per pantalla i es canvia el boolea a true
		if (not es_primer(c)) {
			compost_trobat = true;
			cout << c << endl;
		}
		
		//El que abans era el 2n número en la concatenació, en la següent iteració serà el 1r
		primer_num = segon_num;
	}
	
	//Si quan s’han llegit tots els nombres no s’ha trobat cap concatenació que formi un compost,
	//ho indiquem per pantalla
	if (not compost_trobat) cout << "no" << endl;
}