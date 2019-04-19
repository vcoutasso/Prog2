#ifndef aluno_h
#define aluno_h

#include "pessoa.h"

using namespace std;

class Aluno : public Pessoa {
	protected:
		string ra;
		string curso;
		int periodo;

	public:
		Aluno() : ra("undefined"), curso("undefined"), periodo(0) {};
		Aluno(string nome, string tel, int d, int m, int a, string reg, string curs, int per);

		void mostrar();

		void setRA(string str);
		void setCurso(string str);
		void setPeriodo(int n);

		string getRA();
		string getCurso();
		int getPeriodo();
};

Aluno::Aluno(string nome, string tel, int d, int m, int a, string reg, string curs, int per) : Pessoa(nome, tel, d, m, a) {
	setRA(reg);
	setCurso(curs);
	setPeriodo(per);
}

void Aluno::mostrar() {
	cout << "Nome: " << nome << endl;
	cout << "Telefone: " << tel << endl;
	cout << "Data de nascimento: " << this->nasc.getData() << endl;
	cout << "RA: " << ra << endl;
	cout << "Curso: " << curso << endl;
	cout << "Periodo: " << periodo << "º" << endl;
}

void Aluno::setRA(string str) {
	ra = str;
}

void Aluno::setCurso(string str) {
	curso = str;
}

void Aluno::setPeriodo(int n) {
	periodo = n;
}

string Aluno::getRA() {
	return ra;
}

string Aluno::getCurso() {
	return curso;
}

int Aluno::getPeriodo() {
	return periodo;
}


#endif
