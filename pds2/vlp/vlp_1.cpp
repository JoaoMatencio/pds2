#include <iostream>
#include <vector>

int main(){


    // 1) Declare uma variável do tipo inteiro e preencha com o valor informado na entrada
    
    
    int value;
    std::cin >> value;
    

    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo
    

    int *p = nullptr;    


    // 3) Declare um vetor de inteiros com tamanho informado na entrada e preencha com dados lidos da entrada
    
    
    int size;
    std::cin >> size;
    std::vector<int> vector(size);
    for (int i = 0; i < size; i++){
        std::cin >> vector[i];
    }

    
    // 4) Imprima o ENDEREÇO da variável declarada em (1)

    
    std::cout << &value << std::endl;

    
    // 5) Imprima o VALOR da variável declarada em (1)
    
    
    std::cout << value << std::endl;


    // 6) Imprima o ENDEREÇO da variável declarada em (2)
    

    std::cout << &p << std::endl;
    

    // 7) Imprima o VALOR da variável declarada em (2)


    std::cout << p << std::endl;    


    // 8) Imprima o ENDEREÇO da variável declarada em (3)
    

    std::cout << &vector << std::endl;


    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)


    std::cout << &vector[0] << std::endl;


    // 10) Imprima o VALOR da primeira posição da variável declarada em (3)


    std::cout << vector[0] << std::endl;


    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    

    p = &value;


    // 12) Imprima o VALOR da variável declarada em (2)
    


    std::cout << p << std::endl;


    // 13) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    

    std::cout << *p << std::endl;


    // 14) Compare ENDEREÇO de (1) e o VALOR de (2), imprimindo 'S' se forem iguais e 'N' se forem diferentes
    

    if (&value == p){
        std::cout << "S" << std::endl;
    } else {
        std::cout << "N" << std::endl;
    }


    // 15) Coloque o VALOR '5' no ENDEREÇO apontado por (2)
    

    *p = 5;


    // 16) Imprima o VALOR da variável declarada em (1)
    

    std::cout << value << std::endl;


    // 17) Atribua o VALOR da variável (3) à variável declarada em (2)
    

    p = &vector[0];


    // 18) Imprima o VALOR da variável declarada em (2)
    

    std::cout << p << std::endl;


    // 19) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    

    std::cout << *p << std::endl;


    // 20) Atribua o ENDEREÇO da primeira posição de (3) à variável declarada em (2)
    

    p = &vector[0];


    // 21) Imprima o VALOR da variável declarada em (2)
    

    std::cout << p << std::endl;


    // 22) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    

    std::cout << *p << std::endl;


    // 23) Multiplique todos os valores do vetor declarado em (3) por '10', porém manipulando apenas a variável (2)
    

    p = &vector[0];
    

    for (int i = 0; i < size; i++){
        *p = *p * 10;
        p++;
    }


    // 24) Imprima os elementos de (3) a partir variável do vetor utilizando a notação [] (colchetes)
    

    for (int i = 0; i < size; i++){
        std::cout << vector[i] << ' ';
    }


    std::cout << std::endl;


    // 25) Imprima os elementos de (3) a partir variável do vetor utilizando a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (3)


    for (int i = 0; i < size; i++){
        std::cout << *(vector.data() + i) << ' ';
    }


    std::cout << std::endl;


    // 26) Imprima os elementos de (3) utilizando a variável (2) e a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (3)
    
    
    p = &vector[0];
    for (int i = 0; i < size; i++){
        std::cout << *(p + i) << ' ';
    }


    std::cout << std::endl;


    // 27) Atribua o ENDEREÇO da quinta posição de (3) à variável declarada em (2)
    

    p = &vector[4];


    // 28) Imprima o VALOR da variável declarada em (2)


    std::cout << p << std::endl;


    // 29) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    

    std::cout << *p << std::endl;


    // 30) Declare um ponteiro para ponteiro e o inicialize com o ENDEREÇO da variável (2)
    

    int **pp = &p;


    // 31) Imprima o VALOR da variável declarada em (30)
    

    std::cout << pp << std::endl;


    // 32) Imprima o ENDEREÇO da variável declarada em (30)
    

    std::cout << &pp << std::endl;


    // 33) Imprima o VALOR guardado no ENDEREÇO apontado por (30)
    

    std::cout << *pp << std::endl;

    // 34) Imprima o VALOR guardado no ENDEREÇO do ponteiro apontado por (30)
    
    
    std::cout << **pp << std::endl;


    return 0;
}