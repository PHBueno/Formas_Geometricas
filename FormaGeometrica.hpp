#include <iostream>

#ifndef FormaGeometrica_hpp
#define FormaGeometrica_hpp
class FormaGeometrica
{
    public:
        virtual float calculaArea() = 0;

     protected:
        float area;
};

#endif
