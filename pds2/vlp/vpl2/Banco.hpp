#ifndef BANCO_HPP
#define BANCO_HPP
#include <iostream>
#include <array>

class Banco {
private:
    int accountsNumbers = 0;
    std::string name;
    std::array<int, 20> listAccounts;
};

#endif
