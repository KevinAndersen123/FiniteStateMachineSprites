#ifndef SWORDMANSHIP_H
#define SWORDMANSHIP_H

#include <State.h>

class SwordmanShip : public State
{
public:
	SwordmanShip() {};
	~SwordmanShip() {};
	void idle(Animation* a);
};

#endif // !IDLE_H

