#ifndef CONTA_BANCARIA_HPP
#define CONTA_BANCARIA_HPP

#include <string>
#include <iostream>
#include <iomanip>

class ContaBancaria {
private:
    int id;
    std::string cliente;
    float saldo;

public:
    ContaBancaria(int id, const std::string& cliente);
    void deposito(float valor);
    void saque(float valor);
    void pix(ContaBancaria& outra_conta, float valor);
    void imprime() const;
};

#endif
