#include <iostream>

using namespace std;

int main() {
    // Declara��o da vari�vel para armazenar a aresta do quadrado
    float aresta;

    // Solicita ao usu�rio que insira o valor da aresta
    cout << "Digite o valor da aresta do quadrado: ";
    cin >> aresta;

    // Calcula a �rea do quadrado
    float area = aresta * aresta;

    // Exibe o resultado
    cout << "A �rea do quadrado �: " << area << endl;

    return 0;
}