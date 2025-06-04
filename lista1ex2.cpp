#include <iostream>

using namespace std;

int main() {
    // Declaração da variável para armazenar a aresta do quadrado
    float aresta;

    // Solicita ao usuário que insira o valor da aresta
    cout << "Digite o valor da aresta do quadrado: ";
    cin >> aresta;

    // Calcula a área do quadrado
    float area = aresta * aresta;

    // Exibe o resultado
    cout << "A área do quadrado é: " << area << endl;

    return 0;
}