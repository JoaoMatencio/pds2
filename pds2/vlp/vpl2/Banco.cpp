#include "Banco.hpp"

Banco::Banco() : numContas(0) {
    contas.fill(nullptr);
}

Banco::~Banco() {
    for (auto& conta : contas) {
        delete conta;
    }
}

ContaBancaria* Banco::criaConta(int id, const std::string& cliente) {
    for (int i = 0; i < numContas; ++i) {
        if (contas[i] && contas[i]->id == id) return nullptr;
    }
    if (numContas < 20) {
        contas[numContas] = new ContaBancaria(id, cliente);
        numContas++;
        return contas[numContas - 1];
    }
    return nullptr;
}

ContaBancaria* Banco::pesquisa(int id) {
    for (int i = 0; i < numContas; ++i) {
        if (contas[i] && contas[i]->id == id) {
            return contas[i];
        }
    }
    return nullptr;
}

void Banco::listaContas() {
    for (int i = 0; i < numContas; ++i) {
        if (contas[i]) {
            contas[i]->imprime();
        }
    }
}
