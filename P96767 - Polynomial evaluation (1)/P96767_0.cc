//Primer guardarem el valor de x
//Després, començant per x0, multiplicarem cada coeficient que llegim per la següent potència de x.

//La problema d’aquest exercici és que si per cada coeficient que llegim hem de calcular la
//potencia de x que toca, ens saltarà la bomba del Jutge i ens donarà “time límit exceeded”.

//Per evitar això, anirem guardant la potencia de x que hem calculat per cada coeficient, i així pel
//següent només haurem de multiplicar-lo 1 cop més per x.



#include <iostream>
using namespace std;

int main () {
	//Instruccions per a que la sortida tingui 4 decimals de precissió
	cout.setf(ios::fixed);
	cout.precision(4);
	
	//Aquest cop utilitzarem doubles, ja que estem tractant amb reals i no amb enters.
	double p = 0, x, c, potencia_de_x;
	
	cin >> x;
	potencia_de_x = 1; 	//x0
	
	//Mentres anem llegint coeficients seguim iterant
	while (cin >> c) {

		//Seguim calculant el valor del polinomi
		p += c * potencia_de_x;

		//Preparem potencia_de_x pel següent coeficient
		potencia_de_x *= x; 
	}
	
	cout << p << endl;
}

//Si us heu fixat, primer fem el càlcul del polinomi, i després multipliquem n * x. Això és important per
//a que el programa funcioni correctament.

//Per entendre-ho millor és bo que feu proves amb la idea que tenieu vosaltres i compareu resultats,
//així veure-ho la raó de fer-ho d’aquesta manera
