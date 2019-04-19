#ifndef pessoa_h
#define pessoa_h

#include <iostream>
#include <iomanip>

#include "data.h"

using namespace std;

class Pessoa {
	protected:
		string nome;
		string tel;
		Data nasc;

	public:
		Pessoa() : nome("undefined"), tel("undefined"), nasc() {}
		Pessoa(string n, string t, int d, int m, int a);

		void mostrarAtributos();

		void setNome(string str);
		void setTel(string str);
		void setDataNasc(int d, int m, int a);

		string getNome();
		string getTel();
		string getDataNasc();
		
		int getDiaNasc();
		int getMesNasc();
		int getAnoNasc();
};

Pessoa::Pessoa(string n, string t, int d, int m, int a) {
	setNome(n);
	setTel(t);
	setDataNasc(d, m, a);
}

void Pessoa::mostrarAtributos() {
	cout << "Nome: " << nome << endl;
	cout << "Telefone :" << tel << endl;
	cout << "Data de nascimento: " << this->nasc.getData() << endl;
}

void Pessoa::setNome(string str) {
	nome = str;
}

void Pessoa::setTel(string str) {
	tel = str;
}

void Pessoa::setDataNasc(int d, int m, int a) {
	this->nasc.setData(d, m, a);
}

string Pessoa::getNome() {
	return nome;
}

string Pessoa::getTel() {
	return tel;
}

string Pessoa::getDataNasc() {
	return this->nasc.getData();
}

int Pessoa::getDiaNasc() {
	return this->nasc.getDia();
}

int Pessoa::getMesNasc() {
	return this->nasc.getMes();
}

int Pessoa::getAnoNasc() {
	return this->nasc.getAno();
}

#endif
