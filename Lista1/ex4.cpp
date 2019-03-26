/*
 * A Sequência de Fibonacci, é uma sequência de números inteiros, começando normalmente
 * por 0 e 1, na qual, cada termo subsequente corresponde a soma dos dois anteriores. Os
 * números de Fibonacci são, portanto, os números que compõem a seguinte sequência:
 * 		0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, ...
 * Escreva um programa para imprimir os N-primeiros termos da Sequência de Fibonacci. O
 * usuário fornecerá o valor de N.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	unsigned long long int a = 0, b = 1, aux;
	int n;

	cout << "Entre com n para imprimir o n primeiros termos da sequencia de fibonacci: ";
	cin >> n;
	cout << endl;

	if (n == 0)
		return 0;

	cout << a << " ";

	for (int i = 1; i < n; i++) {
		cout << b << " ";
		aux = a;
		a = b;
		b = aux + b;
	}

	cout << endl;
		
	return 0;
}
