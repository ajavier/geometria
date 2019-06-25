//Programa que calcula el area total de un muro compuesto por figuras geométricas
//Se requiere conocer el área de cada figura y el total de la sumatoria de todas las áreas

// Este programa se encuentra modularizado. Las clases están definidas y 
// declaradas en archivos del proyecto

// bibliotecas
#include <iostream>

// archivos del proyecto
#include "cuadrado.h"
#include "triangulo.h"
#include "rectangulo.h"
#include "figura.h"

using namespace std;


int main() {
    
    //Instanciar objetos cuadrados
    cuadrado cuadrado1;
    cuadrado cuadrado2(8);
    
    cout << "Cálculos de las áreas de dos cuadrados:" << endl;
    cout << "Área cuadrado 1: " << cuadrado1.calcularArea() << endl;
    cout << "Área cuadrado 2: " << cuadrado2.calcularArea() << endl;
    
    //cálculo de área de cuadrado con valores solicitados
    int nuevoLado;
    cout << "Ingrese el lado del nuevo cuadrado: ";
    cin >> nuevoLado;
    cuadrado cuadrado3(nuevoLado); //Instanciar objeto cuadrado 3
    cout << "Área cuadrado 3: " << cuadrado3.calcularArea() << endl;
    
    
    //cálculo de área de triángulo con valores asignados
    cout << " "<< endl;
    cout << "Cálculo de las áreas de dos triángulos:" << endl;
    triangulo triangulo1;        //Instanciar objeto triangulo
    cout << "Area triángulo 1: " << triangulo1.calcularArea() << endl;
    triangulo triangulo2(7, 2);  //Instanciar objeto triangulo
    cout << "Area triángulo 2: " << triangulo2.calcularArea() << endl;
    return 0;
}