#include <iostream>

using namespace std;

int main() {
    // Declaração das variáveis para armazenar a base e a altura do triângulo
    float base, altura;

    // Solicita ao usuário que insira os valores
    cout << "Digite o valor da base do triângulo: ";
    cin >> base;

    cout << "Digite o valor da altura do triângulo: ";
    cin >> altura;

    // Calcula a área do triângulo
    float area = (base * altura) / 2;

    // Exibe o resultado
    cout << "A área do triângulo é: " << area << endl;

    return 0;
}