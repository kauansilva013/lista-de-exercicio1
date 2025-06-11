#include <iostream>
#include <cmath>

int main() {
    double x, y, resultado;
    
    std::cout << "Digite o valor de x: ";
    std::cin >> x;
    
    std::cout << "Digite o valor de y: ";
    std::cin >> y;
    
    resultado = std::pow(x, y);
    
    std::cout << x << " elevado a " << y << " eh: " << resultado << std::endl;
    
    return 0;
}