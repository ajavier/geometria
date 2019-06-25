#pragma once
#include "figura.h"

class rectangulo : public figura{
	int largo;
	int ancho;
public:
	rectangulo();
	rectangulo(int l,int a);
	int calcularArea();
    string getNombre();
};

