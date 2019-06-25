#include "triangulo.h"
#include <iostream>
#include <sstream>

using namespace std;

triangulo::triangulo(int b, int al){
	base=b;
	altura=al;
}

triangulo::triangulo() : triangulo (0,0) {
// Captura los dos parámetros necesarios para instanciar la clase
    int b;
    cout << "Ingrese la base: ";   cin >> b;
    
    int h;
    cout << "ingrese la altura: "; cin >> h;

	base=b;
	altura=h;
}


int triangulo::calcularArea(){
	int area;
	area = (base * altura)/2;
	return area;

}

string triangulo::getNombre(){
    stringstream cadena;
    cadena << nombre << " de base: " << base << " y altura: " << altura;
    return cadena.str();
}
