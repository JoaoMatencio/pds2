#include <iostream>

int main(){
    std::string n;
    std::cin >> n;
    int x;
    double y;
    y = n.length();
    for (x = 0; x < y/2; ++x){
        if (n[x] == n[y-1-x]){
            std::cout << "SIM" << std::endl;
        }
        else{
            std::cout << "NAO" << std::endl;
        }
    }
    return 0;
}

