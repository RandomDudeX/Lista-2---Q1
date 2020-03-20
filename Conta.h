#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"


class Conta:public IConta
{
    public:
        Conta();
        virtual ~Conta();
        void definirLimite();
        SetNomeCliente();
        GetNomeCliente();
        SetSalarioMensal();
        GetSalarioMensal();
        SetNumeroConta();
        GetNumeroConta();
        SetSaldo();
        GetSaldo();
        SetLimite();
        GetLimite();


    protected:
        string nomeCliente;
        double salarioMensal;
        int numeroConta;
        double saldo;
        static double limite;

    private:
};

#endif // CONTA_H
