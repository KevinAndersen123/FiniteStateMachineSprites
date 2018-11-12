#include <Jumping.h>
#include <SwordmanShip.h>
#include <Climbing.h>
#include <Walking.h>
#include <Idle.h>
#include <Shoveling.h>

#include <string>
#include <Hammering.h>

void Jumping::idle(Animation* a)
{
	std::cout << "Jumping -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Jumping::climbing(Animation* a)
{
	std::cout << "Jumping -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Jumping::walking(Animation * a)
{
	std::cout << "Jumping -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Jumping::sword(Animation * a)
{
	std::cout << "Jumping -> SwordmanShip" << std::endl;
	a->setCurrent(new SwordmanShip());
	delete this;
}

void Jumping::shoveling(Animation * a)
{
	std::cout << "Jumping -> Shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}

void Jumping::hammering(Animation * a)
{
	std::cout << "Jumping -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
