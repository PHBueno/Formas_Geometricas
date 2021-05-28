#include <math.h>
#include "Triangulo.hpp"

void Triangulo::setLado(float lado)
{
    this->lado = lado;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Para calcular a área estou partindo do princípio da utilização de um triângulo equilátero;  * 
 * Assumindo a fórmula da área de um triângulo equilátero: A = (l²*√3)/4;                      *
 * Assuminto √3 = 1,73                                                                         * 
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
float Triangulo::calculaArea()
{
    area = (pow(lado,2) * 1.73)/4;
    return area;
}
