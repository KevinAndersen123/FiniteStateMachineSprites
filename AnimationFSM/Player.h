#ifndef PLAYER_H
#define PLAYER_H

#include <Input.h>
#include <Animation.h>
#include <AnimatedSprite.h>

class Player
{
private:
	const Time m_COOLDOWN{sf::seconds(2.0f)};
	sf::Time m_timeBeforeIdle;
	Animation m_animation;
	AnimatedSprite m_animated_sprite;
	Player();
	Clock m_clock;

public:
	Player(const AnimatedSprite&);
	~Player();
	AnimatedSprite& getAnimatedSprite();
	void handleInput(Input);
	void update();
};

#endif // !PLAYER_H
