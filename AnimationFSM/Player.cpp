#include <iostream>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>

Player::Player()
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());
}

Player::Player(const AnimatedSprite& s) : 
	m_animated_sprite(s),
	m_timeBeforeIdle(sf::seconds(0.0f))
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());
}

Player::~Player() {}

AnimatedSprite& Player::getAnimatedSprite()
{
	m_animated_sprite.setTextureRect(m_animated_sprite.getCurrentFrame());
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
		m_animated_sprite.setFrameRow(0);
		m_timeBeforeIdle = m_COOLDOWN;
		break;
	case Input::Action::CLIMBING:
		//std::cout << "Player climbs" << std::endl;
		m_animation.climbing();
		m_animated_sprite.setFrameRow(2);
		m_timeBeforeIdle = m_COOLDOWN;
		break;
	case Input::Action::LEFT:
		//std::cout << "Player jumps Left" << std::endl;
		m_animation.jumping();
		m_animated_sprite.setFrameRow(5);
		m_timeBeforeIdle = m_COOLDOWN;
		break;
	case Input::Action::RIGHT:
		//std::cout << "Player jumps right" << std::endl;
		m_animation.jumping();
		m_animated_sprite.setFrameRow(5);
		m_timeBeforeIdle = m_COOLDOWN;
		break;
	case Input::Action::SHOVELING:
		//std::cout << "Player Shoveling" << std::endl;
		m_animation.shoveling();
		m_animated_sprite.setFrameRow(1);
		m_timeBeforeIdle = m_COOLDOWN;
		break;
	case Input::Action::SWORDMANSHIP:
		//std::cout << "Player now has a sword" << std::endl;
		m_animation.sword();
		m_animated_sprite.setFrameRow(4);
		m_timeBeforeIdle = m_COOLDOWN;
		break;
	case Input::Action::WALKING:
		//std::cout << "Player Walking" << std::endl;
		m_animation.walking();
		m_animated_sprite.setFrameRow(3);
		m_timeBeforeIdle = m_COOLDOWN;
		break;
	case Input::Action::HAMMERING:
		//std::cout << "Player hammering" << std::endl;
		m_animation.hammering();
		m_animated_sprite.setFrameRow(6);
		m_timeBeforeIdle = m_COOLDOWN;
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