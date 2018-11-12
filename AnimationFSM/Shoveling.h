#ifndef SHOVELING_H
#define SHOVELING_H

#include <State.h>

class Shoveling : public State
{
public:
	Shoveling() {};
	~Shoveling() {};
	void idle(Animation* a);
	void climbing(Animation* a);
	void walking(Animation*a);
	void sword(Animation*a);
	void hammering(Animation*a);
	void jumping(Animation*a);
};

#endif // !IDLE_H
