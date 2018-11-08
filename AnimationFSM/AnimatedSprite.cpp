#include <AnimatedSprite.h>

AnimatedSprite::AnimatedSprite()
{
	m_currentFrameCol = 0;
	m_currentFrameRow = 0;
	setCurrentFrame();
}

AnimatedSprite::AnimatedSprite(const sf::Texture& t) :
	Sprite(t),
	m_currentFrameCol(0),
	m_currentFrameRow(0),
	m_time(seconds(0.5f))

{
	setCurrentFrame();
}

AnimatedSprite::~AnimatedSprite()
{
}

const Clock & AnimatedSprite::getClock()
{
	return m_clock;
}

const Time & AnimatedSprite::getTime()
{
	return m_time;
}

const IntRect AnimatedSprite::getCurrentFrame()
{
	return m_currentFrame;
}

void AnimatedSprite::update()
{
	if (m_clock.getElapsedTime() > m_time)
	{
		if(m_currentFrameCol < 5)
		{
			m_currentFrameCol++;
		}
		else
		{
			m_currentFrameCol = 0;
		}
		setCurrentFrame();
		m_clock.restart();

	}
}

void AnimatedSprite::setFrameRow(int t_newRow)
{
	m_currentFrameRow = t_newRow;
}

void AnimatedSprite::setCurrentFrame()
{
	m_currentFrame = IntRect(3 + m_currentFrameCol * 85, 3 + m_currentFrameRow * 85, 84, 84);
}

