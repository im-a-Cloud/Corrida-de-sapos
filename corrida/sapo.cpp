#include "dado.hpp"
#include "corrida.hpp"
#include "sapo.hpp"

using namespace std;

Sapo::Sapo(){}
Sapo::Sapo(Sapo &sapo_copia)
{
	nome_sapo = sapo_copia.get_nome_sapo();
	dist_percorrida = sapo_copia.get_dist_percorrida();
	quant_pulos = sapo_copia.get_quant_pulos();
}
Sapo::~Sapo(){}

void Sapo::set_nome_sapo(string nome_sapo)
{
	this->nome_sapo = nome_sapo;
}
string Sapo::get_nome_sapo()
{
	return nome_sapo;
}
void Sapo::set_dist_percorrida(int dist_percorrida)
{
	this->dist_percorrida = dist_percorrida;
}
int Sapo::get_dist_percorrida()
{
	return dist_percorrida;
}
void Sapo::set_quant_pulos(int quant_pulos)
{
	this->quant_pulos = quant_pulos;
}
int Sapo::get_quant_pulos()
{
	return quant_pulos;
}
void Sapo::pular()
{
	dist_percorrida += meu_dado.jogar();
	quant_pulos+=1;
}