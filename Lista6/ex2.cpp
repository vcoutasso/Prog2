/*
 * Escrever um programa que leia um texto e coloque a primeira letra de cada palavra em maiúsculas.
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
	string texto;
	cout << "Entre com um texto: ";
	getline(cin, texto);

	texto[0] = toupper(texto[0]);
	
	for(string::iterator it = texto.begin() + 1; it != texto.end(); ++it) {
		char prev = *(it - sizeof(char));
		if (prev == ' ' || prev == '.' || prev == ',' || prev == '!' || prev == '?')
			*it = toupper(*it);
	}

	cout << texto << endl;

	return 0;
}
