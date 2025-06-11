#include <iostream>

int main() {
    double cotacao, dolares, reais;
    
    std::cout << "Digite o valor da cotacao do dolar: ";
    std::cin >> cotacao;
    
    std::cout << "Digite a quantidade de dolares: ";
    std::cin >> dolares;
    
    reais = cotacao * dolares;
    
    std::cout << "O valor correspondente em reais eh: R$ " << reais << std::endl;
    
    return 0;
}