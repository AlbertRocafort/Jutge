#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Fila;
typedef vector<Fila> Rectangle;

void dimensions_minimes(char c, const Rectangle& r, int& fils, int& cols) {
	fils = cols = 1;
	int ff = r.size(), cc = r[0].size(), i, j;
	bool fi;
	
	int iminima = ff - 1;
	i = 0;
	fi = false;
	while (not fi and i < ff) {
		j = 0;
		while (not fi and j < cc){
			if (r[i][j] == c) {
				fi = true;
			}
			j++;
		}
		i++;
	}
	iminima = i - 1;
	
	
	
	int jminima = cc  - 1;
	j = 0;
	fi = false;
	while (not fi and j < cc) {
		i = 0;
		while (not fi and i < ff) {
			if (r[i][j] == c) {
				fi = true;
			}
			i++;
		}
		j++;
	}
	jminima = j - 1;
	
	
	
	int imaxima = 0;
	i = ff - 1;
	fi = false;
	while (not fi and i >= 0) {
		j = cc - 1;
		while (not fi and j >= 0) {
			if (r[i][j] == c) {
				fi = true;
			}
			j--;
		}
		i--;
	}
	imaxima = i + 1;
	
	
	
	int jmaxima = 0;
	j = cc - 1;
	fi = false;
	while (not fi and j >= 0) {
		i = ff - 1;
		while (not fi and i >= 0) {
			if (r[i][j] == c) {
				fi = true;
			}
			i--;
		}
		j--;
	}
	jmaxima = j + 1;
	
	
	
	cols += jmaxima - jminima;
    fils += imaxima - iminima;
}
