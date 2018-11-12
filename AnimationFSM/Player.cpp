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
	case Input::Action::CLIMBING:
		//std::cout << "Player climbs" << std::endl;
		m_animation.climbing();
		if (m_animation.getCurrent() != m_animation.getPrevious())
		{
			m_animated_sprite.setFrameRow(2);
		}
		m_timeBeforeIdle = m_COOLDOWN;
		break;
	case Input::Action::LEFT:
		//std::cout << "Player jumps Left" << std::endl;
		m_animation.jumping();
		if (m_animation.getCurrent() != m_animation.getPrevious())
		{
			m_animated_sprite.setFrameRow(5);
		}
		m_timeBeforeIdle = m_COOLDOWN;
		break;
	case Input::Action::RIGHT:
		//std::cout << "Player jumps right" << std::endl;
		m_animation.jumping();
		if (m_animation.getCurrent() != m_animation.getPrevious())
		{
			m_animated_sprite.setFrameRow(5);
		}
		m_timeBeforeIdle = m_COOLDOWN;
		break;
	case Input::Action::SHOVELING:
		//std::cout << "Player Shoveling" << std::endl;
		m_animation.shoveling();
		if (m_animation.getCurrent() != m_animation.getPrevious())
		{
			m_animated_sprite.setFrameRow(1);
		}
		m_timeBeforeIdle = m_COOLDOWN;
		break;
	case Input::Action::SWORDMANSHIP:
		//std::cout << "Player now has a sword" << std::endl;
		m_animation.sword();
		if (m_animation.getCurrent() != m_animation.getPrevious())
		{
			m_animated_sprite.setFrameRow(4);
		}
		m_timeBeforeIdle = m_COOLDOWN;
		break;
	case Input::Action::WALKING:
		//std::cout << "Player Walking" << std::endl;
		m_animation.walking();
		if (m_animation.getCurrent() != m_animation.getPrevious())
		{
			m_animated_sprite.setFrameRow(3);
		}
		m_timeBeforeIdle = m_COOLDOWN;
		break;
	case Input::Action::HAMMERING:
		//std::cout << "Player hammering" << std::endl;
		m_animation.hammering();
		if (m_animation.getCurrent() != m_animation.getPrevious())
		{
			m_animated_sprite.setFrameRow(6);
		}
		
		m_timeBeforeIdle = m_COOLDOWN;
		break;
	default:
		if (sf::seconds(0.0f) >= m_timeBeforeIdle)
		{
			//std::cout << "Player Idling" << std::endl;
			m_animation.idle();
			if (m_animation.getCurrent() != m_animation.getPrevious())
			{
				m_animated_sprite.setFrameRow(0);
			}
		}
		break;
	}
	m_animation.setPrevious(m_animation.getCurrent()); //sets current to previous
}


void Player::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_animated_sprite.update();

	if (sf::seconds(0.0f) < m_timeBeforeIdle)
	{
		m_timeBeforeIdle -= m_clock.getElapsedTime();
		m_clock.restart();
	}
}