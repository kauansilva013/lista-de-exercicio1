#include <iostream>

using namespace std;

int main() {
    // Declara��o das vari�veis para armazenar a base e a altura do tri�ngulo
    float base, altura;

    // Solicita ao usu�rio que insira os valores
    cout << "Digite o valor da base do tri�ngulo: ";
    cin >> base;

    cout << "Digite o valor da altura do tri�ngulo: ";
    cin >> altura;

    // Calcula a �rea do tri�ngulo
    float area = (base * altura) / 2;

    // Exibe o resultado
    cout << "A �rea do tri�ngulo �: " << area << endl;

    return 0;
}