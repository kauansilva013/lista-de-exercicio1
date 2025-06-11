#include <iostream>

int main() {
    double produto1, produto2, produto3, produto4, produto5, total, pagamento, troco;
    
    std::cout << "Digite o valor do primeiro produto: ";
    std::cin >> produto1;
    
    std::cout << "Digite o valor do segundo produto: ";
    std::cin >> produto2;
    
    std::cout << "Digite o valor do terceiro produto: ";
    std::cin >> produto3;
    
    std::cout << "Digite o valor do quarto produto: ";
    std::cin >> produto4;
    
    std::cout << "Digite o valor do quinto produto: ";
    std::cin >> produto5;
    
    total = produto1 + produto2 + produto3 + produto4 + produto5;
    
    std::cout << "O total da compra eh: R$ " << total << std::endl;
    
    std::cout << "Digite o valor do pagamento: ";
    std::cin >> pagamento;
    
    troco = pagamento - total;
    
    if (troco >= 0) {
        std::cout << "O troco a ser devolvido eh: R$ " << troco << std::endl;
    } else {
        std::cout << "Valor insuficiente para pagamento!" << std::endl;
    }

    return 0;
}