/*
 * Escreva um programa que leia um nome completo e imprima o sobrenome seguido por uma vírgula (‘,’) e em seguida o restante do nome.
 * (Ex: Ionildo José Sanches => Sanches, Ionildo José).
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;

	cout << "Digite um nome completo: ";
	getline(cin, str);

	int space = str.find_last_of(" ");
	string sobrenome = str.substr(space + 1);

	str.erase(space);
	str.insert(0, sobrenome + ", ");

	cout << str << endl;

	return 0;
}
