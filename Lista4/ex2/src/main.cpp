#include <iostream>
#include <iomanip>

#include "bolsista.h"
#include "professor.h"

using namespace std;

int main () {
	Bolsista b("Juca Bala", "1234-4321", 1, 2, 2000, "123456", "Engenharia Eletronica", 2, "Projeto", "Orientador", "CAPES");
	Professor p("Buca Jala", "4321-123", 2, 1, 1970, 2, 3, 1990, "DAELN", 15000, "T40");

	b.mostrar();
	cout << endl << endl;
	p.reajuste(-200);
	p.mostrar();

	return 0;
}
