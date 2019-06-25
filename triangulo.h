#pragma once
#include "figura.h"

class triangulo : public figura{
	int base;
	int altura;
public:
	triangulo();
	triangulo(int b,int al);
	int calcularArea();
    string getNombre();
};