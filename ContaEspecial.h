#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"

class ContaEspecial: protected Conta
{
    public:
        ContaEspecial();
        virtual ~ContaEspecial();
        void definirLimite();

    protected:

    private:
};

#endif // CONTAESPECIAL_H
