/*
 * O valor de x^y pode ser calculado como sendo x multiplicado por si mesmo y vezes (se y for inteiro).
 * Escreva uma classe chamada “Matematica” que contenha um construtor para inicializar x e y (usando template), um método chamado “potencia” que calcule e
 * retorne (o  retorno pode ser inteiro ou real dependendo dos argumentos) o resultado de x^y (considere  que y pode ser positivo ou negativo e x pode ser 
 * inteiro ou real). Implemente a função main para exemplificar a utilização da classe criada.
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

template <typename T>
class Matematica {
	private:
		T x;
		T y;

	public:
		Matematica(T a, T b) : x(a), y(b) {} ;
		T potencia() { return pow(x, y); };

};

int main() {
	Matematica<int> i(2, 3);
	Matematica<float> f(1.01f, 2.01f);
	Matematica<double> d(1.01, 2.01);
	
	cout << "int: " << i.potencia() << endl;
	cout << "float: " << fixed << setprecision(8) << f.potencia() << endl;
	cout << "double: " << fixed << setprecision(8) << d.potencia() << endl;

	return 0;
}

