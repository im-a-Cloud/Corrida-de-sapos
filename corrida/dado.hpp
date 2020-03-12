#ifndef DADO_HPP
#define DADO_HPP
#include <random>
class dado {
private:
	int valor;
	std::random_device rd;
	std::default_random_engine gen;
	std::uniform_int_distribution<> dis;
public:
	dado ();
	int jogar();
	int getValor();
	~dado();
};
#endif