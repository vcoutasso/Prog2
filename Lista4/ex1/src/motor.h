#ifndef motor_h
#define motor_h

using namespace std;

class Motor {
	private:
		double potencia;
		double peso;
		string combustivel;

	public:
		Motor() : potencia(0), peso(0), combustivel("undefined") {}
		Motor(double po, double pe, string str);

		int setPotencia(double p);
		int setPeso(double p);
		void setCombustivel(string str);

		double getPotencia();
		double getPeso();
		string getCombustivel();
};

Motor::Motor(double po, double pe, string str) {
	setPotencia(po);
	setPeso(pe);
	setCombustivel(str);
}

int Motor::setPotencia(double p) {
	if (p < 0) 
		return -1;

	potencia = p;
	return 1;
}

int Motor::setPeso(double p) {
	if (p < 0) 
		return -1;

	peso = p;
	return 1;
}

void Motor::setCombustivel(string str) {
	combustivel = str;
}

double Motor::getPotencia() {
	return potencia;
}

double Motor::getPeso() {
	return peso;
}

string Motor::getCombustivel() {
	return combustivel;
}

#endif
