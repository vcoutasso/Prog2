#ifndef funcionario_h
#define funcionario_h

#include "pessoa.h"

using namespace std;

class Funcionario : public Pessoa {
	protected:
		Data dataAdmissao;
		string setor;
		double salario;

	public:
		Funcionario() : dataAdmissao(), setor("undefined"), salario(0) {};
		Funcionario(string nome, string tel, int d, int m, int a, int da, int ma, int aa, string set, double sal);

		void reajuste(double n);
		void mostrar();

		void setDataAdmissao(int d, int m, int a);
		void setSetor(string str);
		void setSalario(double n);

		string getDataAdmissao();
		string getSetor();
		double getSalario();

};

Funcionario::Funcionario (string nome, string tel, int d, int m, int a, int da, int ma, int aa, string set, double sal) : Pessoa(nome, tel, d, m, a) {
	setDataAdmissao(da, ma, aa);
	setSetor(set);
	setSalario(sal);
}

void Funcionario::reajuste(double n) {
	setSalario(salario + n);
}

void Funcionario::mostrar() {
	cout << "Nome: " << nome << endl;
        cout << "Telefone: " << tel << endl;
	cout << "Data de nascimento: " << this->nasc.getData() << endl;
	cout << "Data de admissao: " << this->dataAdmissao.getData() << endl;
	cout << "Setor: " << setor << endl;
	cout << "Salario: R$ " << fixed << setprecision(2) << salario << endl;
}

void Funcionario::setDataAdmissao(int d, int m, int a) {
	this->dataAdmissao.setData(d, m, a);
}

void Funcionario::setSetor(string str) {
	setor = str;
}

void Funcionario::setSalario(double n) {
	salario = n;
}

string Funcionario::getDataAdmissao() {
	return this->dataAdmissao.getData();
}

string Funcionario::getSetor() {
	return setor;
}

double Funcionario::getSalario() {
	return salario;
}

#endif
