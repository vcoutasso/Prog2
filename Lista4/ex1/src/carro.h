#ifndef carro_h
#define carro_h

#include "motor.h"
#include "data.h"

using namespace std;

class Carro {
	private:
		string marca;
		string modelo;
		Data *dataFab;
		Motor *infoMotor;
	
	public:
		Carro(string mar, string mod, int d, int m, int a, double pot, double pes, string str);
		~Carro();
		
		void setMarca(string str);
		void setModelo(string str);
		void setData(int d, int m, int a);
		void setMotor(double pot, double pes, string str);

		int setDiaFab(int d);
		int setMesFab(int m);
		int setAnoFab(int a);
		void setDataFab(int d, int m, int a);

		void setPotencia(double p);
		void setPeso(double p);
		void setCombustivel(string str);

		int getDiaFab();
		int getMesFab();
		int getAnoFab();
		string getDataFab();

		double getPotencia();
		double getPeso();
		string getCombustivel();

		string getMarca();
		string getModelo();

		

};

Carro::Carro(string mar, string mod, int d, int m, int a, double pot, double pes, string str) {

	setMarca(mar);
	setModelo(mod);

	setData(d, m, a);
	setMotor(pot, pes, str);
}

Carro::~Carro() {
	if(dataFab)
		delete dataFab;

	if(infoMotor)
		delete infoMotor;
}

int Carro::setDiaFab(int d) {
	return dataFab->setDia(d);
}

int Carro::setMesFab(int m) {
	return dataFab->setMes(m);
}

int Carro::setAnoFab(int a) {
	return dataFab->setAno(a);
}

void Carro::setDataFab(int d, int m, int a) {
	dataFab->setData(d, m, a);
}

void Carro::setPotencia(double p) {
	infoMotor->setPotencia(p);
}

void Carro::setPeso(double p) {
	infoMotor->setPeso(p);
}

void Carro::setCombustivel(string str) {
	infoMotor->setCombustivel(str);
}

void Carro::setMarca(string str) {
	marca = str;
}

void Carro::setModelo(string str) {
	modelo = str;
}

void Carro::setData(int d, int m, int a) {
	dataFab = new Data(d, m, a);
}

void Carro::setMotor(double pot, double pes, string str) {
	infoMotor = new Motor(pot, pes, str);
}

string Carro::getMarca() {
	return marca;
}

string Carro::getModelo() {
	return modelo;
}

int Carro::getDiaFab() {
	return dataFab->getDia();
}

int Carro::getMesFab() {
	return dataFab->getMes();
}

int Carro::getAnoFab() {
	return dataFab->getAno();
}

string Carro::getDataFab() {
	return dataFab->getData();
}

double Carro::getPotencia() {
	return infoMotor->getPotencia();
}

double Carro::getPeso() {
	return infoMotor->getPeso();
}

string Carro::getCombustivel() {
	return infoMotor->getCombustivel();
}


#endif
