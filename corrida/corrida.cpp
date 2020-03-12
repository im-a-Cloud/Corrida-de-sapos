#include "dado.hpp"
#include "corrida.hpp"
#include "sapo.hpp"

using namespace std;

Corrida::Corrida(){}

Corrida::~Corrida(){}

void Corrida::menu()
{
	cout <<"Bem vindo a corrida de SaaS" << endl;
	cout <<"Primeiro entre com os nomes dos sapos, teremos 3" <<endl;
}
void Corrida::vencedor(Sapo sapo1, Sapo sapo2, Sapo sapo3)
{
	while(sapo1.get_dist_percorrida() < Sapo::dist_corrida || sapo2.get_dist_percorrida() < Sapo::dist_corrida || sapo3.get_dist_percorrida() < Sapo::dist_corrida)
	{
		sapo1.pular();
		sapo2.pular();
		sapo3.pular();
		if (sapo1.get_dist_percorrida() >= Sapo::dist_corrida && sapo2.get_dist_percorrida() < Sapo::dist_corrida && sapo3.get_dist_percorrida())
		{
			cout << sapo1.get_nome_sapo() << " Venceu com a corrida com " << sapo1.get_quant_pulos() << " pulos" << endl;
			break;
		}
		if (sapo2.get_dist_percorrida() >= Sapo::dist_corrida && sapo1.get_dist_percorrida() < Sapo::dist_corrida && sapo3.get_dist_percorrida())
		{
			cout << sapo2.get_nome_sapo() << " Venceu com a corrida com " << sapo2.get_quant_pulos() << " pulos" << endl;
			break;
		}
		if (sapo3.get_dist_percorrida() >= Sapo::dist_corrida && sapo1.get_dist_percorrida() < Sapo::dist_corrida && sapo2.get_dist_percorrida())
		{
			cout << sapo3.get_nome_sapo() << " Venceu com a corrida com " << sapo3.get_quant_pulos() << " pulos" << endl;
			break;
		}
	}
}