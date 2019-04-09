/* 
* Escrever um programa em C++ que leia um número inteiro positivo, correspondente a 
* quantidade de números a serem armazenados, e execute as funções abaixo: 
* 	Alocar dinamicamente um bloco de memória suficiente para armazenar os números inteiros; 
* 	Fazer a leitura dos números; 
* 	Alocar dinamicamente blocos de memória suficientes para armazenar os números pares e os números ímpares lidos; 
* 	Separar os números pares e os números ímpares, armazenando-os nos blocos de memória alocados; e
*	Por fim, imprimir na tela os números pares e em seguida os números ímpares. 
*	Liberar a memória alocada.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n;

	cout << "Informe a quantidade de numeros a serem lidos: ";
	cin >> n;
	cout << endl;

	int *ptr;
	ptr = new int [n];

	for (int i = 0; i < n; i++) {
		cout << "Informe o valor de ptr[" << i << "]: ";
		cin >> ptr[i];
	}

	int even = 0, odd = 0;

	for (int i = 0; i < n; i++) {
		if(ptr[i] % 2 == 0)
			even++;
		else
			odd++;
	}

	int *ptr_even, *ptr_odd;
	int ie = 0, io = 0;
	ptr_even = new int [even];
	ptr_odd = new int [odd];

	for (int i = 0; i < n; i++) {
		if(ptr[i] % 2 == 0) {
			ptr_even[ie] = ptr[i];
			ie++;
		}
		else {
			ptr_odd[io] = ptr[i];
			io++;
		}
	}

	delete[] ptr;

	cout << endl;

	cout << "Numeros pares: ";
	for (int i = 0; i < even; i++)
		cout << ptr_even[i] << " ";
	cout << endl;

	cout << "Numeros impares: ";
	for (int i = 0; i < odd; i++)
		cout << ptr_odd[i] << " ";
	cout << endl;

	delete[] ptr_even;
	delete[] ptr_odd;

	return 0;
}
