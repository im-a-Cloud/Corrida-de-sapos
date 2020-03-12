#include <random>
#include "dado.hpp"
#include "corrida.hpp"
#include "sapo.hpp"

dado::~dado(){}

dado::dado():rd(), gen(rd()), dis(1, 6) {
	valor = std::round(dis(gen));
}
int dado::jogar() {
	valor = std::round(dis(gen));
	return valor;
}
int dado::getValor() {
	return valor;
}
