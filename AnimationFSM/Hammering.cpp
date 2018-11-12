#include "Hammering.h"
#include "Idle.h"
#include "Jumping.h"
#include "Walking.h"
#include "SwordmanShip.h"
#include "Shoveling.h"
#include <windows.h>
#include <string>

void Hammering::idle(Animation* a)
{
	std::cout << "Hammering -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Hammering::jumping(Animation * a)
{
	std::cout << "Hammering -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Hammering::walking(Animation * a)
{
	std::cout << "Hammering -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Hammering::sword(Animation * a)
{
	std::cout << "Hammering -> SwordmanShip" << std::endl;
	a->setCurrent(new SwordmanShip());
	delete this;
}

void Hammering::shoveling(Animation * a)
{
	std::cout << "Hammering -> Shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}

void Hammering::climbing(Animation * a)
{
	std::cout << "No, you can't do that now" << std::endl;
	Beep(1000, 500);
}

