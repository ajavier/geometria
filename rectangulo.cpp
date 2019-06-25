#include "rectangulo.h"
#include <iostream>
#include <sstream>

using namespace std;


rectangulo::rectangulo() {
	largo=1; 
	ancho=1;
	nombre = "rectángulo";
}

rectangulo::rectangulo(int l, int a) {
	largo=l; 
	ancho=a;
	nombre = "rectángulo";
}

int rectangulo::calcularArea() {
	int area;
	area =largo * ancho;
	return area;

}

string rectangulo::getNombre() {
    stringstream cadena;
    cadena << nombre << " de largo: " << largo;
    return cadena.str();
}

