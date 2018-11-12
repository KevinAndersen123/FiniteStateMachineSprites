#include "Shoveling.h"
#include "Idle.h"
#include <Windows.h>
#include "Walking.h"
#include "SwordmanShip.h"
#include "Hammering.h"
#include "Jumping.h"
#include <string>

void Shoveling::idle(Animation* a)
{
	std::cout << "Shoveling -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Shoveling::climbing(Animation * a)
{
	std::cout << "No, you can't do that now" << std::endl;
	Beep(1000, 500);
}

void Shoveling::walking(Animation * a)
{
	std::cout << "Shoveling -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Shoveling::sword(Animation * a)
{
	std::cout << "Shoveling -> Sword" << std::endl;
	a->setCurrent(new SwordmanShip());
	delete this;
}

void Shoveling::hammering(Animation * a)
{
	std::cout << "Shoveling -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

void Shoveling::jumping(Animation * a)
{
	std::cout << "Shoveling -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

