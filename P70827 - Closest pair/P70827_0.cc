#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<limits>
#include<bits/stdc++.h> #include<bits/stdc++.h> 
using namespace std;

struct Point {
    double x, y;  
};  

//Ordena segons la component X
bool compareX(const Point& a, const Point& b) {  
    return a.x < b.x;
}

//Ordena segons la component X
bool compareY(const Point& a, const Point& b) {  
    return a.y < b.y;
}

//Calcula la distancia al cuadrat entre 2 punts
double dist(Point p1, Point p2) {  
    return sqrt( (p1.x - p2.x)*(p1.x - p2.x) +  (p1.y - p2.y)*(p1.y - p2.y) );
}

//Funcio que calcula la dist mes propera dins del strip
double stripClosest(vector<Point>& strip, double d) {
	
	//Inicialitzem la dist minima a d
	double min = d;

	//Ordenem segons Y
    sort(strip.begin(), strip.end(), compareY);  

	//Agafem tots els punts, 1 per 1 i calculem la dist amb els seguents mentres la dist entre les seves components y sigui menor a d
	int n = strip.size();
    for (int i = 0; i < n; ++i) {
    	
    	//Mirem tots els punts següents mentre les distancies entre components y sigui sent menor que min
    	for (int j = i+1; j < n && (strip[j].y - strip[i].y) < min; ++j) {
    		
    		//Actualitzem si trobem una millor
    		if (dist(strip[i],strip[j]) < min) {
    			min = dist(strip[i], strip[j]);
			}
		}
	}
  
    return min; 
}

//Retorna la mínima distancia entre 2 punts de P, que té tamany n
double bruteForce(const vector<Point>& v, int l, int r) {
    
	double min = numeric_limits<double>::max();  
    
	//Comprovem totes les distancies
	for (int i = l; i < r; ++i) {
		for (int j = i+1; j <= r; ++j) {
        	if (dist(v[i], v[j]) < min) {
            	min = dist(v[i], v[j]);  
			}
		}
	}
	
	//Retornem la mes petita    
    return min;  
} 

//Crida Recursiva
double closestDist(const vector<Point>& v, int left, int right) {
	
	//Si queden 3 o menys punts ho fem a força bruta
    if (right-left <= 3) return bruteForce(v, left, right);  
  
  	//Sino, D&C
  
    //Punt mig
    int mid = (left + right)/2;  
    Point midPoint = v[mid];  
  
    //Crides recursives per l'esquerra i la dreta 
    double dl = closestDist(v, left, mid);
    double dr = closestDist(v, mid + 1, right);
  
    //Agafem la dist mes petita de les 2
    double d = min(dl, dr);  

	//Vector amb els punts a menor distancia que d de la linia vertical que passa pel punt del mig
	vector<Point> strip(0);
    for (int i = left; i <= right; i++){
    	if (abs(v[i].x - midPoint.x) < d){
    		strip.push_back(v[i]);
		}
	}  
  
  	//Busquem la dist mes petita dins el strip 
	double stripDist = stripClosest(strip, d);
    
	//Retornem la sitancia minima
	return min(d, stripDist);
}


int main() {
	
	//Llegim els punts
	//O(n)
	vector<Point> v(0);
	double x, y;
	while (cin >> x >> y) v.push_back({x, y});
	
	//Ordanem segons la X
	//O(n*log(n))
	sort(v.begin(), v.end(), compareX);
	
	cout << fixed << setprecision(5) << closestDist(v, 0, v.size()-1) << endl;
	
}


