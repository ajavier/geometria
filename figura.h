#pragma once 
#include <string>
using namespace std;

class figura {
protected:
    string nombre;

public:
    figura();
    virtual int calcularArea() = 0;
    virtual string getNombre() = 0;
    // virtual se usa para que el compilador sepa que método tiene que usar
};