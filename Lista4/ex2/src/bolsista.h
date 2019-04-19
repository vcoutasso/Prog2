#ifndef bolsista_h
#define bolsista_h

#include "aluno.h"

using namespace std;

class Bolsista : public Aluno {
	private:
		string nomeProjeto;
		string orientador;
		string orgaoFinanciador;

	public:
		Bolsista() : nomeProjeto("undefined"), orientador("undefined"), orgaoFinanciador("undefined") {};
		Bolsista(string nome, string tel, int d, int m, int a, string ra, string curso, int periodo, string proj, string orientador, string orgao);

		void mostrar();

		void setNomeProjeto(string proj);
		void setOrientador(string orient);
		void setOrgaoFinanciador(string orgao);

		string getNomeProjeto();
		string getOrientador();
		string getOrgaoFinanciador();
};

Bolsista::Bolsista(string nome, string tel, int d, int m, int a, string ra, string curso, int periodo, string proj, string orientador, string orgao) 
	: Aluno(nome, tel, d, m, a, ra, curso, periodo) {
	
		setNomeProjeto(proj);
		setOrientador(orientador);
		setOrgaoFinanciador(orgao);
}

void Bolsista::mostrar() {
   cout << "Nome: " << nome << endl;
   cout << "Telefone: " << tel << endl;
   cout << "Data de nascimento: " << this->nasc.getData() << endl;
   cout << "RA: " << ra << endl;
   cout << "Curso: " << curso << endl;
   cout << "Periodo: " << periodo << "º" << endl;
   cout << "Nome do projeto: " << nomeProjeto << endl;
   cout << "Orientador: " << orientador << endl;
   cout << "Orgao financiador: " << orgaoFinanciador << endl;
}

void Bolsista::setNomeProjeto(string proj) {
	nomeProjeto = proj;
}

void Bolsista::setOrientador(string orient) {
	orientador = orient;
}

void Bolsista::setOrgaoFinanciador(string orgao) {
	orgaoFinanciador = orgao;
}

string Bolsista::getNomeProjeto() {
	return nomeProjeto;
}

string Bolsista::getOrientador() {
	return orientador;
}

string Bolsista::getOrgaoFinanciador() {
	return orgaoFinanciador;
}

#endif
