#include <iostream>

using namespace std;

int main() {
    // Declara��o da vari�vel para armazenar a diagonal do quadrado
    float diagonal;

    // Solicita ao usu�rio que insira o valor da diagonal
    cout << "Digite o valor da diagonal do quadrado: ";
    cin >> diagonal;

    // Calcula a �rea do quadrado
    float area = (diagonal * diagonal) / 2;

    // Exibe o resultado
    cout << "A �rea do quadrado �: " << area << endl;

    return 0;
}