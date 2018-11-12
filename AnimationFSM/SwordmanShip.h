#ifndef SWORDMANSHIP_H
#define SWORDMANSHIP_H

#include <State.h>

class SwordmanShip : public State
{
public:
	SwordmanShip() {};
	~SwordmanShip() {};
	void idle(Animation* a);
	void climbing(Animation* a);
	void walking(Animation*a);
	void shoveling(Animation*a);
	void hammering(Animation*a);
	void jumping(Animation*a);

};

#endif // !IDLE_H

