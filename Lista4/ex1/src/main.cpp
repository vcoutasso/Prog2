/*
 * Usando a linguagem de modelagem UML, faça a modelagem de uma classe Carro para representar automóveis como objetos.
 * Esta classe deverá conter os atributos marca, modelo, data de fabricação e dados do motor, tal que data de fabricação e dados do motor
 * sejam objetos das classes Data e Motor, respectivamente. 
 * Sobre o motor, deve-se armazenar sua potência, peso e combustível aceito (gasolina, etanol, flexou diesel).
 * Portanto, inclua no modelo relacionamentos de composição entre as três classes, para representar a existência de estrutura todo-parte. 
 * Além disso, a classe Carro deverá conter operações para alterar cada um de seus atributos e para exibir os seus dados.
 * Implemente as classes em C++.
 */

#include <iostream>
#include <iomanip>

#include "carro.h"

using namespace std;

int main () {
	Carro tesla("Tesla", "Model S", 16, 4, 2019, 666, 300, "Elétrico");

	cout << "Marca do carro: " << tesla.getMarca() << endl;
	cout << "Modelo d ocarro: " << tesla.getModelo() << endl << endl;

	cout << "Dia de fabricação: " << tesla.getDiaFab() << endl;
	cout << "Mês de fabricação: " << tesla.getMesFab() << endl;
	cout << "Ano de fabricação: " << tesla.getAnoFab() << endl;
	cout << "Data de fabricação: " << tesla.getDataFab() << endl << endl;

	cout << "Potência do motor: " << fixed << setprecision(1) << tesla.getPotencia() << endl;
	cout << "Peso do motor: " << fixed << setprecision(1) << tesla.getPeso() << endl;
	cout << "Tipo de combustível: " << tesla.getCombustivel() << endl;

	// Desaloca memória alocada para *dataFab e *infoMotor
	tesla.~Carro();

	return 0;
} 

