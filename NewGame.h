#pragma once
#include "SfmlObject.h"
using namespace std;
using namespace sf;

class NewGame :
	public SfmlObject
{
private:
	int x = 900, y = 400;
	bool guessed[30] = { false };
	Font font;
	Sprite backsprite;
	Texture background;
	SfmlObject hangman[11];
	RectangleShape grect;
	SfmlObject blankets[20];
	SfmlObject correctAns[20];
	SfmlObject limit;
	string guessedletter;
	Texture texture;
	set<char> wordLength;

public:
	
	SfmlObject alphabet[27];
	NewGame();
	NewGame(float width, float height);
	~NewGame();

	void draw(RenderWindow& window);
	string RandomizeWord();
	string getLetter(int& n);
	void drawEmptySpaces(const std::string& s, RenderWindow& window);
	void drawHangman(RenderWindow& window, int x);
	void fillBlankSpaces(const std::string& choosenWord, RenderWindow& window);
};

