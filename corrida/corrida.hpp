#ifndef CORRIDA_HPP
#define CORRIDA_HPP

#include "dado.hpp"
#include "sapo.hpp"

class Corrida
{
public:
	Corrida();
	void menu();
	void vencedor(Sapo sapo1, Sapo sapo2, Sapo sapo3);
	~Corrida();
};
#endif