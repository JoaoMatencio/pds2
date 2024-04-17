#include <iostream>
#include <Banco.cpp>

<int> main() {
    std::char info;
    std::cin >> info;
    if (info[0] == "C") {
        Banco::addAccount(info[2:5]);
    } else if (info[0] == "D")
    {
        Banco::deposit(info[2:5], info[6:9]);
    } else if (info[0] == "S")
    {
        Banco::withdraw(info[2:5], info[6:9]);
    } else if (info[0] == "P")
    {
        Banco::transfer(info[2:5], info[6:9], info[10:13]);
    } else if (info[0] == "I")
    {
        Banco::listAllAccounts();
    } else {
        return 0;
    }
    }