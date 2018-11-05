#ifndef INPUT_H
#define INPUT_H
class Input
{
public:
	Input();
	~Input();

	enum Action
	{
		IDLE,
		CLIMBING,
		LEFT,
		RIGHT,
		HAMMERING,
		SWORDMANSHIP,
		SHOVELING,
		WALKING
	};

	void setCurrent(Action);
	Action getCurrent();

private:
	Action m_current;
};
#endif