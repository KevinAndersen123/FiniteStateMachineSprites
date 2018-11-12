#include "Walking.h"
#include "Idle.h"
#include "SwordmanShip.h"
#include <Windows.h>
#include <string>
#include "Hammering.h"
#include "Shoveling.h"
#include "Jumping.h"
#include "Climbing.h"
void Walking::idle(Animation * a)
{

	std::cout << "Walking -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Walking::climbing(Animation * a)
{
	std::cout << "Walking -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Walking::sword(Animation * a)
{
	std::cout << "Walking -> SwordmanShip" << std::endl;
	a->setCurrent(new SwordmanShip());
	delete this;
}

void Walking::shoveling(Animation * a)
{
	std::cout << "Walking -> Shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}

void Walking::hammering(Animation * a)
{
	std::cout << "Walking -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

void Walking::jumping(Animation * a)
{
	std::cout << "Walking -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
