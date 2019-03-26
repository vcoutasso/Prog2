/*
 * Faça um programa que a partir do sexo e da altura de uma pessoa, calcule e informe o seu
 * peso ideal, utilizando as seguintes fórmulas:
 * - Masculino: (72.7 * altura) - 58
 * - Feminino: (62.1 * altura) - 44.7
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	char sexo;
	float altura;
	float pesoIdeal;

	cout << "Informe seu sexo (m ou f) e altura em metros: " << endl;
	cin >> sexo >> altura;
	cout << endl;
	
	if (sexo == 'm' || sexo == 'M') 
		pesoIdeal = (72.7 * altura) - 58;
	else if (sexo == 'f' || sexo == 'F') 
		pesoIdeal = (62.1 * altura) - 44.7;
	else {
		cout << "Opção invalida" << endl;
		return -1;
	}

	cout << "Seu peso ideal eh: " << fixed << setprecision(2) << pesoIdeal << " Kg" << endl;	

	return 0;
}
