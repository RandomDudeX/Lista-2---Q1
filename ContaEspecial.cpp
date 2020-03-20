#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(double limite): Conta (limite)
{
}

ContaEspecial::~ContaEspecial() = default;


void definirLimite(double salarioMensal) {
    limite = salarioMensal * 3;
}
