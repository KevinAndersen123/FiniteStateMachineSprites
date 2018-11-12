#include <Climbing.h>
#include <Jumping.h>
#include <Walking.h>
#include <Idle.h>

#include <string>

void Climbing::idle(Animation* a)
{
	std::cout << "Climbing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Climbing::jumping(Animation* a)
{
	std::cout << "Climbing -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Climbing::walking(Animation * a)
{
	std::cout << "Climbing -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Climbing::sword(Animation * a)
{
	std::cout << "No, you can't do that now" << std::endl;
	Beep(1000, 500);
}

void Climbing::shoveling(Animation * a)
{
	std::cout << "No, you can't do that now" << std::endl;
	Beep(1000, 500);
}

void Climbing::hammering(Animation * a)
{
	std::cout << "No, you can't do that now" << std::endl;
	Beep(1000, 500);
}
