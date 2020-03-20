#include "IConta.h"

IConta::IConta()
{

}

IConta::~IConta() = default;

void sacar(double valor)
{
    int money;
    cin >> money;
    valor = valor - money;}

void depositar(double valor){
    int money;
    cin >> money;
    valor = valor + money;}
