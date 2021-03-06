#ifndef HAMMERING_H
#define HAMMERING_H

#include <State.h>

class Hammering : public State
{
public:
	Hammering() {};
	~Hammering() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void walking(Animation*a);
	void sword(Animation*a);
	void shoveling(Animation*a);
	void climbing(Animation*a);
};

#endif // !IDLE_H
