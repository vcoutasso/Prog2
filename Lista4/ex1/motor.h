#ifndef motor_h
#define motor_h

using namespace std;

class Motor {
	private:
		double potencia;
		double peso;
		string combustivel;

	public:
		Motor() : potencia(0), gasolina(0), combustivel("undefined") {}

		void setPotencia(double p);
		void setPeso(double p);
		void setCombustinvel(string str);

		double getPotencia();
		double getPeso();
		double getCombustivel();
};

#endif
