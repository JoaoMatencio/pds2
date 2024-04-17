#include "Banco.hpp"

std::string Banco::addAccount(int accountNumber) {
    auto insert = listAccounts.insert(accountNumber);
    if (!insert.second) {
        return "ERRO: conta repetida";
    }

    return "conta criada";
}

auto Banco::findAccount(int accountNumber) {
    if (listAccounts.find(accountNumber)){
        return &listAccounts.find(accountNumber);
    } else {
        return nullptr;
    }
}

std::array<int, 20> Banco::listAccounts() {
    return listAccounts;
}

int Banco::construtoctor(std::string listAccounts) {
    for &i in listAccounts:
        
    return 0;
}