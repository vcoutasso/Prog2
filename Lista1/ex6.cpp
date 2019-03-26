/*
 * Escreva um programa que monte as figuras a seguir para um valor obtido, por exemplo,
 * igual a 4:
 * 1
 * 1 2
 * 1 2 3
 * 1 2 3 4
 * -------
 * 1
 * 2 2
 * 3 3 3
 * 4 4 4 4
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n;
	int aux;

	cout << "Digite o valor de n: ";
	cin >> n;
	cout << endl;

	for (int i = 1; i <= n; i++) {
		aux = 1;
		for (int j = 1; j <= i; j++) {
			cout << aux << " ";
			aux++;
		}
		cout << endl;
	}
	
	cout << "---------------" << endl;


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i << " ";
		}
		cout << endl;
	}

	return 0;

}
