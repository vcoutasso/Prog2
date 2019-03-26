/*
 * Desenvolva um programa em C++ contendo as seguintes funções:
 * a) Crie uma função que calcule a área de um triangulo retângulo;
 * b) Crie uma função que calcule a área de um retângulo;
 * c) Crie uma função para calcular a média aritmética de 3 valores;
 * d) Crie uma função para calcular a média harmônica de 3 valores;
 * e) Crie uma função para calcular a média geométrica de 3 valores;
 * f) Crie uma função para calcular a média ponderada de 3 valores;
 * g) Crie uma função main que leia os valores de a, b e c (para os itens 1 e 2 considere 
 * apenas os valores de a e b) e imprima o resultado dos cálculos;
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double areaTrRet(double base, double altura) {
	return base * altura / 2;
}

double areaRet(double base, double altura) {
	return base * altura;
}

double mediaArit(double a, double b, double c) {
	return (a + b + c) / 3;
}

double mediaHarm(double a, double b, double c) {
	return 3 / ( 1 / a + 1 / b + 1 / c);
}

double mediaGeo(double a, double b, double c) {
	return pow(a * b * c, (double)1/3);
}

double mediaPond(double a, double b, double c) {
	return (1 * a + 2 * b + 3 * c / 6);
}

int main() {
	double a, b, c;

	cout << "Digite o valor de a, b e c: ";
	cin >> a >> b >> c;
	cout << endl;

	cout << "A area do triangulo retangulo de base " << a << " e altura " << b << " eh: " << areaTrRet(a, b) << endl;
	cout << "A area de retangulo de base " << a << " e altura " << b << " eh: " << areaRet(a, b) << endl;
	cout << "A media aritmetica entre a, b e c eh: " << mediaArit(a, b, c) << endl;
	cout << "A media harmonica entre a, b e c eh: " << mediaHarm(a, b, c) << endl;
	cout << "A media geometrica entre a, b e c eh: " << mediaGeo(a, b, c) << endl;
	cout << "A media ponderada entre a (peso 1), b (peso 2), e c (peso 3) eh: " << mediaPond(a, b, c) << endl;

	return 0;
}
