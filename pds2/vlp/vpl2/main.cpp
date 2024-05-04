#include "Banco.hpp"
#include <iostream>

int main() {
    Banco banco;
    char operacao;

    while (std::cin >> operacao && operacao != 'T') {
        switch (operacao) {
            case 'C': {
                int id;
                std::string nome;
                std::cin >> id >> nome;
                if (banco.criaConta(id, nome))
                    std::cout << "conta criada" << std::endl;
                else
                    std::cout << "ERRO: conta repetida" << std::endl;
                break;
            }
            case 'D': {
                int id;
                float valor;
                std::cin >> id >> valor;
                ContaBancaria* conta = banco.pesquisa(id);
                if (conta) {
                    conta->deposito(valor);
                    std::cout << "deposito efetuado" << std::endl;
                } else {
                    std::cout << "ERRO: conta inexistente" << std::endl;
                }
                break;
            }
            case 'S': {
                int id;
                float valor;
                std::cin >> id >> valor;
                ContaBancaria* conta = banco.pesquisa(id);
                if (conta) {
                    conta->saque(valor);
                    std::cout << "saque efetuado" << std::endl;
                } else {
                    std::cout << "ERRO: conta inexistente" << std::endl;
                }
                break;
            }
            case 'P': {
                int id, dest;
                float valor;
                std::cin >> id >> dest >> valor;
                ContaBancaria* conta1 = banco.pesquisa(id);
                ContaBancaria* conta2 = banco.pesquisa(dest);
                if (conta1 && conta2) {
                    conta1->pix(*conta2, valor);
                    std::cout << "pix efetuado" << std::endl;
                } else {
                    std::cout << "ERRO: conta inexistente" << std::endl;
                }
                break;
            }
            case 'I': {
                banco.listaContas();
                break;
            }
        }
    }
    return 0;
}
