#include "FormaGeometrica.hpp"

#ifndef Circulo_hpp
#define Circulo_hpp
class Circulo : public FormaGeometrica
{
    public:
        Circulo(){};

        float calculaArea();
        void setRaio(float raio);
    private:
        float raio;
};
#endif