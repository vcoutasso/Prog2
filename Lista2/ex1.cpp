#include <iostream>

using namespace std;

class Data {
	private:
		int dia, ano;
		int mes;
	public:
		void inicializaData(int d, int m, int a);

		int validaData();
		void mostraData();

		void setDia(int d);
		void setMes(int m);
		void setAno(int a);

		int getDia();
		int getMes();
		int getAno();
};

void Data::inicializaData(int d, int m, int a) {
	setDia(d);
	setMes(m);
	setAno(a);
}

int Data::validaData() {
	int max;
	bool bissexto = false;

	if (mes == 2) {
		if (ano % 4 == 0)
			bissexto = true;
		if (ano % 100 == 0)
			bissexto = false;
		if (ano % 400 == 0)
			bissexto = true;

		if (!bissexto)
			max = 28;
		else
			max = 29;
	}

	else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
		max = 31;
	else
		max = 30;

	if (dia > max || dia < 0)
		return 0;
	if (mes > 12 || mes < 0)
		return 0;
	if (ano < 0)
		return 0;

	return 1;
}

void Data::mostraData() {
	cout << dia << "/" << mes << "/" << ano << endl;
}

void Data::setDia(int d) {
	dia = d;
}

void Data::setMes(int m) {
	mes = m;
}

void Data::setAno(int a) {
	ano = a;
}

int Data::getDia() {
	return dia;
}

int Data::getMes() {
	return mes;
}

int Data::getAno() {
	return ano;
}



int main() {
	int dia, mes, ano;
	Data data;

	cout << "Entre com a data separada por espacos (apenas numeros): ";
	cin >> dia >> mes >> ano;
	
	data.inicializaData(dia, mes, ano);
	
	if (!data.validaData())
		cout << "Data invalida!" << endl;
	else
		data.mostraData();


	return 0;
}
