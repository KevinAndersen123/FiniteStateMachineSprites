#include "SwordmanShip.h"
#include "Idle.h"

#include <string>

void SwordmanShip::idle(Animation* a)
{
	std::cout << "SwordmanShip -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
