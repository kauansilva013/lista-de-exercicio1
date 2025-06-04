#include <iostream>

using namespace std;

int main() {
    // Declaração das variáveis para armazenar os quatro valores
    float v1, v2, v3, v4;

    // Solicita ao usuário que insira os valores
    cout << "Digite o primeiro valor: ";
    cin >> v1;

    cout << "Digite o segundo valor: ";
    cin >> v2;

    cout << "Digite o terceiro valor: ";
    cin >> v3;

    cout << "Digite o quarto valor: ";
    cin >> v4;

    // Calcula a média aritmética
    float media = (v1 + v2 + v3 + v4) / 4;

    // Exibe o resultado
    cout << "A média aritmética é: " << media << endl;

    return 0;
}