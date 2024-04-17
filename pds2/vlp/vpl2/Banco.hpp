#ifndef BANCO_HPP
#define BANCO_HPP
#include <iostream>
#include <array>

class Banco {
public:
    std::string addAccount(int accountNumber);
    std::string deposit(int accountNumber, int value);
    std::string withdraw(int accountNumber, int value);
    std::string transfer(int accountNumber1, int accountNumber2, int value);
    std::array<int, 20> listAccounts();
    int construtoctor(std::string listAccounts);
    auto findAccount(int accountNumber);
};

#endif
