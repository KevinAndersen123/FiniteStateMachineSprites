#include "Shoveling.h"
#include "Idle.h"

#include <string>

void Shoveling::idle(Animation* a)
{
	std::cout << "Shoveling -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

