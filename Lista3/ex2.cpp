/* 
 * Usando a notação da UML, modele duas classes, chamadas Pessoa Física e Pessoa 
 * Jurídica. As duas classes devem ter como atributos o nome, o endereço, o total de 
 * rendimentos no último ano e o ano de nascimento/fundação. Utilizando a ideia de 
 * polimorfismo em classes diferentes, insira nas duas classes: 
 *  
 * Um construtor que inicialize os atributos do objeto com valores informados pelo 
 * usuário. 
 *
 * Uma operação que retorne o valor a pagar de imposto sobre o rendimento anual 
 * (sendo 15% para pessoa física e 10% para pessoa jurídica). 
 *
 * Uma operação que retorne a previsão de rendimentos para daqui a n anos 
 * (n será informado pelo usuário e, portanto, passado como parâmetro para essa 
 * operação). Considere que a previsão de crescimento anual dos rendimentos de 
 * uma pessoa física é de 3% e de uma pessoa jurídica é de 7%;
 *
 * Faça a implementação da Classe em C++.
 */

#include <iostream>
#include <iomanip>

using namespace std;

class PessoaFisica {
	private:
		static double imposto;
		static double rendimento;

	protected:
		string nome;
		string endereco;
		int ano;
		double totalRendimento;

		void setNome(string nome);
		void setEndereco(string endereco);
		void setAno(int n);
		void setRendimento(double rendimento);

	public:
		PessoaFisica(string nome, string endereco, double totalRendimento, int ano);

		double calculaImposto();
		double calculaRendimento(int n);

		string getNome();
		string getEndereco();
		int getAno();
		double getRendimento();

};

PessoaFisica::PessoaFisica(string nome, string endereco, double totalRendimento, int ano) {
	setNome(nome);
	setEndereco(endereco);
	setRendimento(totalRendimento);
	setAno(ano);
}

double PessoaFisica::imposto = 0.15;
double PessoaFisica::rendimento = 0.03;

// Sets
void PessoaFisica::setNome(string nome) {
	this->nome = nome;
}

void PessoaFisica::setEndereco(string endereco) {
	this->endereco = endereco;
}

void PessoaFisica::setAno(int ano) {
	this->ano = ano;
}

void PessoaFisica::setRendimento(double rendimento) {
	this->totalRendimento = rendimento;
}

// Gets
string PessoaFisica::getNome() {
	return this->nome;
}

string PessoaFisica::getEndereco() {
	return this->endereco;
}

int PessoaFisica::getAno() {
	return this->ano;
}

double PessoaFisica::getRendimento() {
	return this->totalRendimento;
}

double PessoaFisica::calculaImposto() {
	return this->getRendimento() * this->imposto;
}

double PessoaFisica::calculaRendimento(int n) {
	double rend = this->getRendimento();
	double result = 0;

	for (int i = 0; i < n; i++) {
		result += rend * this->rendimento;
		
	}

	return result;
}

class PessoaJuridica : public PessoaFisica {
	private:
		static double imposto;
		static double rendimento;
	public:
		PessoaJuridica(string nome, string endereco, double totalRendimento, int ano);

		double calculaImposto();
		double calculaRendimento(int n);
};

// Construtor de PessoaJuridica não faz nada, apenas chamada o construtor de PessoaFisica com os parametros corretos.
PessoaJuridica::PessoaJuridica(string nome, string endereco, double totalRendimento, int ano) : PessoaFisica(nome, endereco, totalRendimento, ano) 
{
}

double PessoaJuridica::calculaImposto() {
	return this->getRendimento() * this->imposto;
}

double PessoaJuridica::calculaRendimento(int n) {
	double rend = this->getRendimento();
	double result = 0;

	for (int i = 0; i < n; i++) {
		result += rend * this->rendimento;
		
	}

	return result;
}

double PessoaJuridica::imposto = 0.1;
double PessoaJuridica::rendimento = 0.07;


int main() {
	int n;

	PessoaFisica pf("Pessoa Fisica", "Av. Sete de Setembro 3165", 5050.50, 1999);
	PessoaJuridica pj("Pessoa Juridica", "Av. Sete de Setembro 3165", 5050.50, 2005);


	cout << "Classe PessoaFisica\n\n" << "Nome: " << pf.getNome() << endl << "Endereço: " << pf.getEndereco() << endl;
	cout << "Rendimento do ultimo ano: R$" << fixed << setprecision(2) << pf.getRendimento() << endl << "Imposto a pagar: R$" << pf.calculaImposto();
	cout << endl << endl;
	cout << "Informe a quantidade de anos para calcular a previsão de rendimentos: ";
	cin >> n;
	cout << "Previsão calculada: R$" << fixed << setprecision(2) << pf.calculaRendimento(n) << endl << endl;
	
	cout << "Classe PessoaJuridica\n\n" << "Nome: " << pj.getNome() << endl << "Endereço: " << pj.getEndereco() << endl;
	cout << "Rendimento do ultimo ano: R$" << fixed << setprecision(2) << pj.getRendimento() << endl << "Imposto a pagar: R$" << pj.calculaImposto();
	cout << endl << endl;
	cout << "Informe a quantidade de anos para calcular a previsão de rendimentos: ";
	cin >> n;
	cout << "Previsão calculada: R$" << fixed << setprecision(2) << pj.calculaRendimento(n) << endl;


	return 0;
}
