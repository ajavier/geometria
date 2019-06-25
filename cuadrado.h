#pragma once
#include "figura.h"

class cuadrado : public figura {
//sesión para declaraciones privadas
    int lado;

public:
//sesión para declaraciones públicas
    cuadrado();        //Declaración del Constructor sin parámetros
    cuadrado(int l);  //Declaración del Constructor con parámetros
    int calcularArea();  //Método de la clase
    string getNombre();
};