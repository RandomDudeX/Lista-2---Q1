#include <iostream>
#include <string>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main()
{
    Conta c1;
    ContaEspecial c2;

    c1.sacar();
    c1.depositar();
    c1.definirLimite();
    c2.sacar();
    c2.depositar();
    c2.definirLimite();

    return 0;
}
