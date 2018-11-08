#include "Hammering.h"
#include "Idle.h"

#include <string>

void Hammering::idle(Animation* a)
{
	std::cout << "Hammering -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
