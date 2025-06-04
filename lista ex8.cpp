#include <iostream>

using namespace std;

int main() {
    // Declaração da variável para armazenar a temperatura em Celsius
    float celsius;

    // Solicita ao usuário que insira o valor em Celsius
    cout << "Digite a temperatura em graus Celsius: ";
    cin >> celsius;

    // Converte para Fahrenheit
    float fahrenheit = (celsius * 9 / 5) + 32;

    // Exibe o resultado
    cout << celsius << "°C equivalem a " << fahrenheit << "°F." << endl;

    return 0;
}