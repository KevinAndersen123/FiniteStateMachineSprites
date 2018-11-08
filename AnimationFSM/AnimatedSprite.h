#ifndef ANIMATED_SPRITE_H
#define ANIMATED_SPRITE_H

#include <SFML\Graphics\Sprite.hpp>
#include <SFML\System\Clock.hpp>
#include <vector>
#include <Debug.h>

using namespace std;
using namespace sf;

class AnimatedSprite : public Sprite {
public:
	AnimatedSprite();
	AnimatedSprite(const Texture&);
	~AnimatedSprite();

	const Clock& getClock();
	const Time& getTime();
	const IntRect getCurrentFrame();
	void update();
	
	void setFrameRow(int t_newRow);
private:
	Clock m_clock;
	Time m_time;
	IntRect m_currentFrame;
	int m_currentFrameRow;
	int m_currentFrameCol;

	void setCurrentFrame();

};

#endif // !ANIMATED_SPRITE_H
