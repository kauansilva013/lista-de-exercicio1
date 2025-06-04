#include <iostream>

using namespace std;

int main() {
    // Declaração da variável para armazenar a diagonal do quadrado
    float diagonal;

    // Solicita ao usuário que insira o valor da diagonal
    cout << "Digite o valor da diagonal do quadrado: ";
    cin >> diagonal;

    // Calcula a área do quadrado
    float area = (diagonal * diagonal) / 2;

    // Exibe o resultado
    cout << "A área do quadrado é: " << area << endl;

    return 0;
}