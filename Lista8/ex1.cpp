#include <iostream>
#include <string>
#include <stack>

#define INVALIDA 	cout << "Expressao invalida ou sem parenteses!" << endl; 
#define VALIDA 		cout << "Expressao valida!" << endl;

using namespace std;

void toggle(bool &e, bool &d) {
	e = !e;
	d = !d;
}

int main() {
	string eq;

	// Conta quantas parenteses de cada um faltam. Espera-se que toda expressao tenha um par de parenteses
	int falta_abre = 0;
	int falta_fecha = 1;

	// Conta quantas vezes aparecem '(' e ')'
	int nabre = 0;
	int nfecha = 0;

	// Define o prox parenteses que estou esperando. fecha = true pq o ultimo a aparecer devera estar fechando outro parenteses.
	bool abre = false;
	bool fecha = true;

	cout << "Entre com uma eq: ";
	getline(cin, eq);

	stack<char> s;

	// Inicializa stack com todos os caracteres de eq
	for (string::iterator i = eq.begin(); i != eq.end(); i++) 
		s.push(*i);

	// Um loop muito bacana para iterar pela stack e remover os caracteres que nao preciso mais depois de usar
	for (;!s.empty(); s.pop()) {

		if (s.top() == '(') {

			// Se a primeira comparacao for com um '(', significa que tem um parenteses sem fechar.
			// Se for esse o caso, sai do loop e verifica que a eq eh invalida pois falta_fecha != falta_abre.
			if (s.size() == eq.size())
				break;

			// Se nao esperava um '('
			if (!abre) {
				falta_fecha++;
			}
			else {
				// Se estou esperando mais de um '(', diminui o contador falta_abre em 1.
				if (falta_abre > 0)
					falta_abre--;
				// Caso contrario, passa a esperar um ')'
				if (!falta_abre) 
					toggle(fecha, abre);
			}

			nabre++;
		}

		else if (s.top() == ')') {
			// Se nao esperava um ')'
			if (!fecha) { 
				falta_abre++;
			}
			else {
				// Se estou esperando mais de um ')', diminui o contador falta_fecha em 1.
				if (falta_fecha > 0)
					falta_fecha--;
				// Caso contrario, passa a esperar um '('
				if (!falta_fecha) {
					toggle(fecha, abre);
					falta_abre++;
				}
			}

			nfecha++;	
		}
	}


	if ((falta_abre or falta_fecha) or ((nfecha != nabre))) 
		INVALIDA
	else
		VALIDA

	return 0;
}
