#include "cuadrado.h"
#include <iostream>
#include <sstream>

using namespace std;

//constructor de la clase
cuadrado::cuadrado() {   //definición del constructor
    lado = 0;  
    nombre = "cuadrado";
}

cuadrado::cuadrado(int l) {  //definición del constructor
    lado = l;
    nombre = "cuadrado";
    
}

int cuadrado::calcularArea() {  //definción del método calcularArea
    int area;
    area = lado * lado;
    return area;
}

string cuadrado::getNombre() {
    stringstream cadena;
    cadena <<nombre << " de lado: " << lado;
    return cadena.str();
}

