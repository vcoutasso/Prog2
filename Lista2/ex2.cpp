#include <iostream>
#include <iomanip>

using namespace std;

class Conta {
	private:
		int numero, agencia;
		double saldo;
		string nome;

		void setNumero(int num);
		void setAgencia(int ag);
		void setNome(string str);


		int verificaSaldo(double quantia);
	public:
		Conta(int num, int ag, string str);

		void deposito(double quantia);
		void retirada(double quantia);
		void mostraSaldo();
		
		int getNumero();
		int getAgencia();
		string getNome();
};

Conta::Conta(int num, int ag, string str) {
	saldo = 0;
	setNome(str);
	setAgencia(ag);
	setNumero(num);
}

void Conta::setNumero(int num) {
	numero = num;
}

void Conta::setAgencia(int ag) {
	agencia = ag;
}

void Conta::setNome(string str) {
	nome = str;
}

int Conta::getNumero() {
	return numero;
}

int Conta::getAgencia() {
	return agencia;
}

string Conta::getNome() {
	return nome;
}

void Conta::deposito(double quantia) {

	if (quantia < 0) {
		cout << "Valor invalido!" << endl;
		return;
	}

	saldo += quantia;

}

void Conta::retirada(double quantia) {
	if (verificaSaldo(quantia))
		saldo -= quantia;
}

void Conta::mostraSaldo() {
	cout << "Ola " << nome << endl;
	cout << "Seu saldo atual eh: R$ " << fixed << setprecision(2) << saldo << endl << endl;
}

int Conta::verificaSaldo(double quantia) {
	if (quantia <= saldo)
		return 1;

	return 0;
}

int main() {
	Conta Vinicius(1234, 4321, "Vinicius Couto Tasso");


	Vinicius.mostraSaldo();
	Vinicius.deposito(50000.50);
	Vinicius.mostraSaldo();

	Vinicius.retirada(20000);
	Vinicius.mostraSaldo();
	
	cout << "Numero da conta: " << Vinicius.getNumero() << endl << "Numero da agencia: " << Vinicius.getAgencia() << endl << endl;

	return 0;
}
