#include <iostream>

using namespace std;

int main() {
    // Declara��o da vari�vel para armazenar a quantidade de milhas mar�timas
    float milhas_maritimas;

    // Solicita ao usu�rio que insira o valor em milhas mar�timas
    cout << "Digite a quantidade de milhas mar�timas: ";
    cin >> milhas_maritimas;

    // Converte para quil�metros
    float quilometros = milhas_maritimas * 1.852;

    // Exibe o resultado
    cout << milhas_maritimas << " milhas mar�timas equivalem a " << quilometros << " quil�metros." << endl;

    return 0;
}