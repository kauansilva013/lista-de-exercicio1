#include <iostream>
#include <cmath>

int main() {
    double diametro, raio, area;
    
    std::cout << "Digite o diametro do circulo: ";
    std::cin >> diametro;
    
    raio = diametro / 2.0;
    area = M_PI * std::pow(raio, 2);
    
    std::cout << "A area do circulo eh: " << area << std::endl;
    
    return 0;
}