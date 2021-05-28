#include <iostream>
#include "Circulo.hpp"
#include "Triangulo.hpp"
#include "Retangulo.hpp"
using namespace std;

void menu()
{
  cout << "\n=-=-=-=-=-=-= CÁLCULO DE ÁREAS =-=-=-=-=-=-=-=\n";
  cout << "Deseja calcular a área de qual figura:\n";
  cout << "(1) -> Círculo;\n";
  cout << "(2) -> Triângulo Equilátero;\n";
  cout << "(3) -> Retângulo;\n";
}

int main()
{
  int resposta;

  menu();
  cout << "Opção: ";
  cin >> resposta;

  
  switch (resposta)
  {
  case 1:
    {
      float raio;
      Circulo c1;
      cout << "Informe o Raio do Círculo: ";
      cin >> raio;
      c1.setRaio(raio);
      cout << "A área do círculo de raio " << raio << " é " << c1.calculaArea() << endl;
    }
    break;
    
  case 2:
    {
      float lado;
      Triangulo t1;
      cout << "Informe o lado do Triângulo Equilátero: ";
      cin >> lado;
      t1.setLado(lado);
      cout << "A área do triângulo de lado " << lado << " é " << t1.calculaArea() << endl;
    }
    break;
  case 3:
    {
      float altura;
      float base;
      Retangulo r1;
      cout << "Informe a base do Retângulo: ";
      cin >> base;
      cout << "Informe a altura do Retângulo: ";
      cin >> altura;
      r1.setAltura(altura);
      r1.setBase(base);
      cout << "A área do Retângulo de base " << base << " e altura " << altura << " é " << r1.calculaArea() << endl;
    }
    break;
  }
}
