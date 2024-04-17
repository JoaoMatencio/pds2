#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <cctype>
#include <ctime>
#include <limits>

std::string toUppercase(const std::string& input) {
    std::string result;
    for (char c : input) {
        result += std::toupper(static_cast<unsigned char>(c));
    }
    return result;
}

int main(){
    std::ifstream arquivo("palavras.txt");
    std::vector<std::string> palavras;
    std::string linha;
    std::string resposta;
    std::string situacao;
    int chave = 0;
    std::string word;
    std::string jatestadas;

    while (std::getline(arquivo, linha)){
        palavras.push_back(linha);
    }


    arquivo.close();


    while (true) {
        std::cin >> chave;
        if (std::cin.fail() || chave < 1 || chave > palavras.size() - 1) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    word = palavras[chave];

    for (int i = 0; i < 5; i++) {
        std::cin >> resposta;
        resposta = toUppercase(resposta);

    if (resposta.size() != word.size()) {
        i--;
        continue;
    }

    if (resposta == word) {
        std::cout << resposta << '(' << jatestadas << ')' << std::endl;
        std::cout << "GANHOU!" << std::endl;
        return 0;
    } else {
        for (int j = 0; j < word.size(); j++) {
            if (resposta[j] == word[j]) {
                continue;
            } else {
                if (word.find(resposta[j]) != std::string::npos) {
                    resposta[j] = std::tolower(resposta[j]);
                }   
                else {
                    if (jatestadas.find(resposta[j]) == std::string::npos) {
                    jatestadas += resposta[j];
                }
                resposta[j] = '*';
                }
            }
    }
    std::cout << resposta << '(' << jatestadas << ')' << std::endl;
    } 
    }


    std::cout << "PERDEU!" << word;
    return 0;
    }
