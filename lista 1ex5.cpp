#include <iostream>

using namespace std;

int main() {
    // Declara��o das vari�veis para armazenar os quatro valores
    float v1, v2, v3, v4;

    // Solicita ao usu�rio que insira os valores
    cout << "Digite o primeiro valor: ";
    cin >> v1;

    cout << "Digite o segundo valor: ";
    cin >> v2;

    cout << "Digite o terceiro valor: ";
    cin >> v3;

    cout << "Digite o quarto valor: ";
    cin >> v4;

    // Calcula a m�dia aritm�tica
    float media = (v1 + v2 + v3 + v4) / 4;

    // Exibe o resultado
    cout << "A m�dia aritm�tica �: " << media << endl;

    return 0;
}