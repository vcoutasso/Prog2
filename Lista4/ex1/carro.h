#ifndef carro_h
#define carro_h

#include "motor.h"
#include "data.h"

using namespace std;

class Carro {
	private:
		string marca;
		string modelo;
		Data dataFab;
		Motor infoMotor;
	
	public:
		Carro(): marca("undefined"), modelo("undefined") {}
		
		void setMarca(string str);
		void setModelo(string str);

		string getMarca();
		string getModelo();

		int getDiaFab();
		int getMesFab();
		int getAnoFab();
		string getDataFab();

		double getPotencia();
		double getPeso();
		double getCombustivel();


};

#endif
