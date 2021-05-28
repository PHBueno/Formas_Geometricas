#include "FormaGeometrica.hpp"

#ifndef Triangulo_hpp
#define Triangulo_hpp
class Triangulo : public FormaGeometrica
{
    public:
        Triangulo(){};
        float calculaArea();

        void setLado(float lado);
    
    private:
        float lado;
};
#endif