#include "SfmlObject.h"
using namespace sf;

SfmlObject::SfmlObject()
{
	holder.setSize(Vector2f(24, 24));
	holderSetFillColor(Color::Black);
	sprite.setPosition(Vector2f(0, 0));
}


SfmlObject::~SfmlObject()
{
}
bool SfmlObject::isSpriteClicked(Sprite& sprite, Vector2i mousepos)
{
	Vector2f ms(mousepos);
	return sprite.getGlobalBounds().contains(ms);
}

bool SfmlObject::isLetterChosen(RectangleShape& holder, Vector2i mousepos)
{
	Vector2f ms(mousepos);
	if (holder.getGlobalBounds().contains(ms))
	{
		return true;
	}
	return false;
}