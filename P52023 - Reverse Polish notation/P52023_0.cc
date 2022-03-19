#include <cctype> //llibreria per mirar si és dígits o no
#include <iostream>
#include <stack>
#include <cstdlib>
#include <sstream>
using namespace std;



int main()
{
	//Anirem afegint els numeros a la pila
    //Quan trobem un signe de operacio, utilitzarem els dos ultims nums de la pila
    //Tornarem a guardarhi el resultat
    
    //String que utilitzarem per llegir la linia sencera
    string linia;
    
    
    //Anem llegint les linies senceres de una en una
    while (getline(cin, linia)) {
    	
    	//Guardem la linia que hem llegit en el buffer per anar treient-ne els elements un a un
    	stringstream ss(linia);
    	
    	//Pila per guardar els numeros
    	stack<int> pila;
    	
    	//Llegim tots els elements que conte la linia
    	string s;
        while (ss >> s) {
        	
        	//es un numero
            if (isdigit(s[0]))
                pila.push(atoi(s.c_str())); //afegeixo el numero a la pila
                
            //no es un numero
            else {
            	
            	//Treiem els dos ultims nums de la pila
                int x = pila.top();
                pila.pop();
                int y = pila.top();
                pila.pop();

                //fem la operacio
                if (s == "+")
                    pila.push(y + x);
                else if (s == "-")
                    pila.push(y - x);
                else if (s == "*")
                    pila.push(x * y);
                else
                    pila.push(y / x);
            }
        }
        cout << pila.top() << endl;
    }
}
