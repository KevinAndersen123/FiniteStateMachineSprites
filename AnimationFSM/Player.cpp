#include <iostream>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>

Player::Player()
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());
}

Player::Player(const AnimatedSprite& s) : m_animated_sprite(s)
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());
}

Player::~Player() {}

AnimatedSprite& Player::getAnimatedSprite()
{
	int frame = m_animated_sprite.getCurrentFrame();
	m_animated_sprite.setTextureRect(m_animated_sprite.getFrame(frame));
	return m_animated_sprite;
}

void Player::handleInput(Input in)
{
	DEBUG_MSG("Handle Input");

	switch (in.getCurrent())
	{
	case Input::Action::IDLE:
		//std::cout << "Player Idling" << std::endl;
		m_animation.idle();
		break;
	case Input::Action::CLIMBING:
		//std::cout << "Player climbs" << std::endl;
		m_animation.climbing();
		break;
	case Input::Action::LEFT:
		//std::cout << "Player jumps Left" << std::endl;
		m_animation.jumping();
		break;
	case Input::Action::RIGHT:
		//std::cout << "Player jumps right" << std::endl;
		m_animation.jumping();
		break;
	case Input::Action::SHOVELING:
		//std::cout << "Player Shoveling" << std::endl;
		m_animation.shoveling();
		break;
	case Input::Action::SWORDMANSHIP:
		//std::cout << "Player now has a sword" << std::endl;
		m_animation.sword();
		break;
	case Input::Action::WALKING:
		//std::cout << "Player Walking" << std::endl;
		m_animation.walking();
		break;
	case Input::Action::HAMMERING:
		//std::cout << "Player hammering" << std::endl;
		m_animation.hammering();
		break;
	default:
		break;
	}
}

void Player::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_animated_sprite.update();
}