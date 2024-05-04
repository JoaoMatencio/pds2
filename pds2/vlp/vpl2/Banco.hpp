#ifndef BANCO_HPP
#define BANCO_HPP

#include "ContaBancaria.hpp"
#include <array>

struct Banco {
    std::array<ContaBancaria*, 20> contas;
    int numContas;

    Banco();
    ~Banco();
    ContaBancaria* criaConta(int id, const std::string& cliente);
    ContaBancaria* pesquisa(int id);
    void listaContas();
};

#endif
