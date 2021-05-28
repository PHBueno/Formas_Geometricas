#include "FormaGeometrica.hpp"

#ifndef Retangulo_hpp
#define Retangulo_hpp
class Retangulo : public FormaGeometrica
{
    public:
        Retangulo(){};
        float calculaArea();
        void setBase(float base);
        void setAltura(float altura);
    private:
        float base;
        float altura;
};
#endif