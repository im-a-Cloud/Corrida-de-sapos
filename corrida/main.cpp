#include "dado.hpp"
#include "corrida.hpp"
#include "sapo.hpp"
#include <string>

using namespace std;

int main(){
	Corrida cor;
 	Sapo sapo1;
 	Sapo sapo2;
 	Sapo sapo3;
	string nome_sapo;
	cor.menu();
	cin >> nome_sapo;
	sapo1.set_nome_sapo(nome_sapo);
	cin >> nome_sapo;
	sapo2.set_nome_sapo(nome_sapo);
	cin >> nome_sapo;
	sapo3.set_nome_sapo(nome_sapo);
	cor.vencedor(sapo1, sapo2, sapo3);
	sapo1.set_dist_percorrida(0);
	sapo2.set_dist_percorrida(0);
	sapo3.set_dist_percorrida(0);
	sapo1.set_quant_pulos(0);
	sapo2.set_quant_pulos(0);
	sapo3.set_quant_pulos(0);
	return 0;

}