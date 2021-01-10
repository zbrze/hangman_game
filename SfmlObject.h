#pragma once
#include<SFML\Graphics.hpp>
#include<SFML\Audio.hpp>
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<list>
#include<stack>
#include<set>
#include<time.h>

using namespace std;
using namespace sf;


class SfmlObject
{

	Sprite sprite;
	RectangleShape holder;
	Font font;
	Text text;
	Texture texture;
	
public:

	SfmlObject();
	~SfmlObject();

	bool isSpriteClicked(Sprite& sprite, Vector2i mousepos);
	bool isLetterChosen(RectangleShape& holder, Vector2i mousepos);

	void textureLoadFromFile(string filename) { texture.loadFromFile(filename); }
	void holderSetSize(Vector2f vector) { holder.setSize(vector); }
	void holderSetFillColor(Color color) { holder.setFillColor(color); }
	void textSetCharacterSize(int size) { text.setCharacterSize(size); }
	void holderSetPosition(Vector2f vector) { holder.setPosition(vector); }
	int holderGetPositionX() { return holder.getPosition().x; }
	int holderGetPositionY() { return holder.getPosition().y; }
	RectangleShape &getHolder() { return holder;  }

	void textSetString(char word) { text.setString(word); }
	void textSetFont(const Font &font) { text.setFont(font); }
	void textSetPosition(Vector2f vector) { text.setPosition(vector); }
	void textSetFillColor(const Color &color) { text.setFillColor(color); }
	const Color &textGetFillColor() { return text.getFillColor(); }
	string textGetString() { return text.getString(); }
	Text getText() { return text; }

	void spriteSetTexture(Texture t) { sprite.setTexture(t); }
	Texture& getTexture_() { return texture; }
	
	Sprite getSprite() { return sprite; }
	void spriteSetPosition(Vector2f vector) { sprite.setPosition(vector); }
	void spriteSetTexture_(const Texture& t) { sprite.setTexture(t); }
};

