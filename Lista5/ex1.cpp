#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Pessoa {
	protected:
		string nome;
		string dataNasc;

	public:
		Pessoa(string n, string d) : nome(n), dataNasc(d) {};
		Pessoa() {};

		void setNome(string str) { nome = str; };
		void setData(string str) { dataNasc = str; };

		string getNome() { return nome; };
		string getData() { return dataNasc; };

		void print() { cout << "Nome da pessoa: " << getNome() << endl << "Data de nascimento: " << getData() << endl; };
};

class PessoaIMC : public Pessoa {
	protected:
		double peso;
		double altura;

	public:
		//PessoaIMC(string n, string d, double p, double a) { Pessoa(n, d); setPeso(p); setAlt(a); };
		PessoaIMC() {};

		void setPeso(double p) { peso = p; };
		void setAlt(double a) { altura = a; };

		double getPeso() { return peso; };
		double getAlt() { return altura; };

		double calculaIMC(double p, double a) { return p / pow(a, 2); };
		virtual string resultIMC() = 0;

		void print() { cout << "Nome da pessoa: " << getNome() << endl << "Data de nascimento: " << getData() << endl
			<< "Peso: " << fixed << setprecision (2) << getPeso() << endl << "Altura: " << getAlt() << endl; }

};	

class Homem : public PessoaIMC {
	public:
		Homem(string n, string d, double p, double a) { Pessoa(n, d); setPeso(p); setAlt(a); };

		string resultIMC() {
			double result = calculaIMC(getPeso(), getAlt());

			cout << "Seu IMC: " << fixed << setprecision(2) << result << endl;

			if (result < 20.7) 
				return "Abaixo do peso ideal";
			else if (result < 26.4)
				return "Peso ideal";
			else
				return "Acima do peso ideal";

			
		};
};

class Mulher : public PessoaIMC {
	public:
		Mulher(string n, string d, double p, double a) { Pessoa(n, d); setPeso(p); setAlt(a);  };

		string resultIMC() {
			double result = calculaIMC(getPeso(), getAlt());
			string ret;

			cout << "Seu IMC: " << fixed << setprecision(2) << result << endl;

			if (result < 19) 
				return "Abaixo do peso ideal";
			else if (result < 25.8)
				return "Peso ideal";
			else
				return "Acima do peso ideal";

			
		};
};

int main() {
	Homem h("Homem", "03/05/2019", 80, 1.80);
	Mulher m("Mulher", "05/03/2019", 60, 1.65);

	cout << h.resultIMC() << endl;
	cout << endl;
	cout << m.resultIMC() << endl;

	return 0;
}
