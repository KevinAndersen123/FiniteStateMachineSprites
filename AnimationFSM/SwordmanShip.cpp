#include "SwordmanShip.h"
#include "Idle.h"
#include <Windows.h>
#include <string>
#include "Walking.h"
#include "Hammering.h"
#include "Shoveling.h"
#include "Jumping.h"

void SwordmanShip::idle(Animation* a)
{
	std::cout << "SwordmanShip -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void SwordmanShip::climbing(Animation * a)
{
	std::cout << "No, you can't do that now" << std::endl;
	Beep(1000, 500);
}

void SwordmanShip::walking(Animation * a)
{
	std::cout << "SwordmanShip -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}


void SwordmanShip::hammering(Animation * a)
{
	std::cout << "SwordmanShip -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

void SwordmanShip::jumping(Animation * a)
{
	std::cout << "SwordmanShip -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void SwordmanShip::shoveling(Animation * a)
{
	std::cout << "SwordmanShip -> Shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}