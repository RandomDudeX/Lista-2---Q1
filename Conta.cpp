#include "Conta.h"

Conta::Conta(string nomeCliente, double salarioMensal, int numeroConta, double saldo)
{
    cin >> nomeCliente;
    cin >> salarioMensal;
    cin >> numeroConta;
    cin >> saldo;
}
void definirLimite(double salarioMensal) {
    limite = salarioMensal * 2;
}

Conta::~Conta() = default;
