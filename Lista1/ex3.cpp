/*
 * Dados 3 valores a, b e c, elabore um programa que verifique se eles podem ser valores dos
 * lados de um triângulo, e se for, se é um triângulo equilátero, isósceles ou escaleno. Caso não
 * formem um triângulo, escrever uma mensagem apropriada. (Propriedade: o comprimento de
 * cada lado de um triângulo é menor do que a soma dos comprimentos dos outros dois lados.)
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float a, b, c;

	cout << "Digite o comprimento dos 3 lados do triangulo: ";
	cin >> a >> b >> c;
	cout << endl;

	if (a > b + c || b > a + c || c > a + b)
		cout << "Medidas invalidas, não eh triangulo!" << endl;
	else {
		cout << "Eh triangulo ";

		if (a == b && b == c && a == c)
			cout << "equilatero" << endl;
		else if (a != b && b != c && a != c)
			cout << "escaleno" << endl;
		else
			cout << "isosceles" << endl;
	}


	return 0;
}
