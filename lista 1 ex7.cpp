#include <iostream>

using namespace std;

int main() {
    // Declaração da variável para armazenar a quantidade de milhas marítimas
    float milhas_maritimas;

    // Solicita ao usuário que insira o valor em milhas marítimas
    cout << "Digite a quantidade de milhas marítimas: ";
    cin >> milhas_maritimas;

    // Converte para quilômetros
    float quilometros = milhas_maritimas * 1.852;

    // Exibe o resultado
    cout << milhas_maritimas << " milhas marítimas equivalem a " << quilometros << " quilômetros." << endl;

    return 0;
}