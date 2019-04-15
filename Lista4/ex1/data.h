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
		Data() : dia(0), mes(0), ano(0) {}

		void setDia(int d);
		void setMes(int m);
		void setAno(int a);
		void setData(int d, int m, int a);
		void setData();

		int getDia();
		int getMes();
		int getAno();
		void getData();

};

#endif
