#ifndef WALKING_H
#define WALKING_H

#include <State.h>

class Walking : public State
{
public:
	Walking() {};
	~Walking() {};
	void idle(Animation* a);
	void climbing(Animation* a);
	void sword(Animation*a);
	void shoveling(Animation*a);
	void hammering(Animation*a);
	void jumping(Animation*a);
};

#endif // !IDLE_H

