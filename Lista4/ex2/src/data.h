#ifndef data_h
#define data_h

using namespace std;

class Data {
	private:
		int dia;
		int mes;
		int ano;
		string data;
	
	public:
		Data() : dia(0), mes(0), ano(0), data("undefined") {}
		Data(int d, int m, int a);

		int setDia(int d);
		int setMes(int m);
		int setAno(int a);
		int setData(int d, int m, int a);
		int setData();

		int getDia();
		int getMes();
		int getAno();
		string getData();

};

Data::Data(int d, int m, int a) {
	setDia(d);
	setMes(m);
	setAno(a);
	setData();
}

int Data::setDia(int d) {
	if (d < 0) {
		cout << "Data::setDia() : Valor inválido!" << endl;
		dia = 0;
		return -1;
	}

	dia = d;
	return 1;
}

int Data::setMes(int m) {
	if (m < 0) {
		cout << "Data::setMes() : Valor inválido!" << endl;
		mes = 0;
		return -1;
	}

	mes = m;
	return 1;
}

int Data::setAno(int a) {
	if (a < 0)  {
		cout << "Data::setAno() : Valor inválido!" << endl;
		ano = a;
		return -1;
	}

	ano = a;
	return 1;
}

int Data::setData(int d, int m, int a) {
	if (d < 0 || m < 0 || a < 0) {
		cout << "Data::setData() : Valor inválido!" << endl;
		Data();
		return -1;
	}

	data = "";

	if (d < 10)
		data = "0";

	data = data + to_string(d) + "/";

	if (m < 10)
		data = data + "0";

	data = data + to_string(m) + "/" + to_string(a);
	return 1;
}

int Data::setData() {
	data = "";

	if (dia < 10)
		data = "0";

	data = data + to_string(dia) + "/";

	if (mes < 10)
		data = data + "0";

	data = data + to_string(mes) + "/" + to_string(ano);
	return 1;
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

string Data::getData() {
	return data;
}


#endif
