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
        listAccounts.insert(i);
    return 0;
}

std::string Banco::deposit(int accountNumber, int value) {
    auto account = findAccount(accountNumber);
    if (account == nullptr) {
        return "ERRO: conta inexistente";
    }

    account->deposit(value);
    return "depósito realizado";
}


std::string Banco::withdraw(int accountNumber, int value) {
    auto account = findAccount(accountNumber);
    if (account == nullptr) {
        return "ERRO: conta inexistente";
    }

    return "saque realizado";
}

std::string Banco::transfer(int accountNumber1, int accountNumber2, int value) {
    auto account1 = findAccount(accountNumber1);
    if (account1 == nullptr) {
        return "ERRO: conta inexistente";
    }

    auto account2 = findAccount(accountNumber2);
    if (account2 == nullptr) {
        return "ERRO: conta inexistente";
    }

    account1->withdraw(value);
    account2->deposit(value);
    return "pix efetuado";
}

std::string Banco::listAllAccounts() {
    std::string accounts;
    for (auto &account : listAccounts) {
        accounts += account + "\n";
    }

    return accounts;
}
