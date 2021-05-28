#include "Retangulo.hpp"
#include <math.h>

void Retangulo::setBase(float base)
{
    this->base = base;
}

void Retangulo::setAltura(float altura)
{
    this->altura = altura;
}

float Retangulo::calculaArea()
{
    area = base * altura;
    return area;
}