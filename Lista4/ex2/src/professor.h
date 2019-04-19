#ifndef professor_h
#define professor_h

#include "funcionario.h"

using namespace std;

class Professor : public Funcionario {
	protected:
		string regimeTrabalho;

	public:
		Professor() : regimeTrabalho("undefined") {};
		Professor(string nome, string tel, int d, int m, int a, int dd, int mm, int aa, string setor, double salario, string regime);

		void mostrar();

		void setRegimeTrabalho(string str);
		string getRegimeTrabalho();
};


Professor::Professor(string nome, string tel, int d, int m, int a, int dd, int mm, int aa, string setor, double salario, string regime) : 
	Funcionario(nome, tel, d, m, a, dd, mm, aa, setor, salario) {
		regimeTrabalho = regime;
}

void Professor::mostrar() {
	cout << "Nome: " << nome << endl;
        cout << "Telefone: " << tel << endl;
        cout << "Data de nascimento: " << this->nasc.getData() << endl;
        cout << "Data de admissao: " << this->dataAdmissao.getData() << endl;
        cout << "Setor: " << setor << endl;
        cout << "Salario: R$ " << fixed << setprecision(2) << salario << endl;
	cout << "Regime de trabalho: " << regimeTrabalho << endl;
}


void Professor::setRegimeTrabalho(string str) {
	regimeTrabalho = str;
}

string Professor::getRegimeTrabalho() {
	return regimeTrabalho;
}

#endif
