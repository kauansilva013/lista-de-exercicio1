#include <iostream>
using namespace std;

int main()
{
	int b;
	int a;
	int area;
	
	cout << "Informe o valor da base do retangulo: ";
	cin >> b;
	
	cout << "Informe o valor da altura do retangulo: ";
	cin >> a;
	
	area = b * a;
	
	cout << "A area do retangulo que tem base " << b << " e altura " << a << " eh igual a " << area;;
	
	return 0;
}
