#include <iostream>
#include <cmath> // Biblioteca para fun��es matem�ticas

using namespace std;

int main() {
    // Declara��o das vari�veis para armazenar os dois valores
    float v1, v2;

    // Solicita ao usu�rio que insira os valores
    cout << "Digite o primeiro valor: ";
    cin >> v1;

    cout << "Digite o segundo valor: ";
    cin >> v2;

    // Calcula a m�dia geom�trica
    float media_geometrica = sqrt(v1 * v2);

    // Exibe o resultado
    cout << "A m�dia geom�trica �: " << media_geometrica << endl;

    return 0;
}