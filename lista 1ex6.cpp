#include <iostream>
#include <cmath> // Biblioteca para funções matemáticas

using namespace std;

int main() {
    // Declaração das variáveis para armazenar os dois valores
    float v1, v2;

    // Solicita ao usuário que insira os valores
    cout << "Digite o primeiro valor: ";
    cin >> v1;

    cout << "Digite o segundo valor: ";
    cin >> v2;

    // Calcula a média geométrica
    float media_geometrica = sqrt(v1 * v2);

    // Exibe o resultado
    cout << "A média geométrica é: " << media_geometrica << endl;

    return 0;
}