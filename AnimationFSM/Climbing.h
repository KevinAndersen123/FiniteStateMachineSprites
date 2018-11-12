#ifndef CLIMBING_H
#define CLIMBING_H

#include <State.h>
#include <Windows.h>

class Climbing : public State
{
public:
	Climbing() {};
	~Climbing() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void walking(Animation*a);
	void sword(Animation*a);
	void shoveling(Animation*a);
	void hammering(Animation*a);
};

#endif // !IDLE_H