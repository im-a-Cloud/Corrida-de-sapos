#ifndef SAPO_HPP
#define SAPO_HPP

#include "dado.hpp"
#include "corrida.hpp"
#include <string>
#include <iostream>

using namespace std;
class Sapo
{
private:
	string nome_sapo;
	int dist_percorrida;
	int quant_pulos;
	dado meu_dado;
public:
	static const int dist_corrida = 100;

	Sapo();
	Sapo(Sapo &sapo_copia);
	void set_nome_sapo(string nome_sapo);
	void set_dist_percorrida(int dist_percorrida);
	void set_quant_pulos(int quant_pulos);
	void pular();

	string get_nome_sapo();
	int get_dist_percorrida();
	int get_quant_pulos();

	~Sapo();
	
};


#endif

