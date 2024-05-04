#include "ContaBancaria.hpp"

ContaBancaria::ContaBancaria(int id, const std::string& cliente) : id(id), cliente(cliente), saldo(0.0) {}

void ContaBancaria::deposito(float valor) {
    saldo += valor;
}

void ContaBancaria::saque(float valor) {
    if (saldo >= valor) {
        saldo -= valor;
    }
}

void ContaBancaria::pix(ContaBancaria& outra_conta, float valor) {
    if (saldo >= valor) {
        saque(valor);
        outra_conta.deposito(valor);
    }
}

void ContaBancaria::imprime() const {
    std::cout << id << " " << cliente << " " << std::fixed << std::setprecision(2) << saldo << std::endl;
}
