#include <iostream>
#include <math.h>
#include "Circulo.hpp"

void Circulo::setRaio(float raio)
{
    this->raio = raio;
}

float Circulo::calculaArea()
{
    area = 3.14 * pow(raio,2);
    return area;
}