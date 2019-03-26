/*
 * Fazer um programa que calcule o mdc (máximo divisor comum) de dois números inteiros
 * fornecidos. O mdc entre dois ou mais números naturais é o maior de seus divisores. Por
 * exemplo: os divisores comuns de 12 e 18 são 1,2,3 e 6. Dentre eles, 6 é o maior.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int mdc(int a, int b) {
	if (b == 0)
		return a;
	else
		return mdc(b, a % b);
}	

int main() {
	int a, b;

	cout << "Digite dois numeros inteiros: ";
	cin >> a >> b;
	cout << endl;

	cout << "O MDC entre eles eh: " << mdc(a,b) << endl;

	return 0;
}
