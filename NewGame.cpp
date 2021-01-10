#include "NewGame.h"
#include<iostream>
#include<SFML/Graphics.hpp>
using namespace std;
using namespace sf;

NewGame::NewGame(float width, float height)
{
	if (!font.loadFromFile("other/lazy.ttf"))
	{
		cout << "Cant load font";
	}
	if (!background.loadFromFile("other/bg.bmp"))
	{
		cout << "Cant load background";
	}
	backsprite.setTexture(background);
	for (int i = 0; i < 27; i++)
	{
		alphabet[i].holderSetSize(Vector2f(45, 45));
		alphabet[i].holderSetFillColor(Color::White);
		alphabet[i].textSetFillColor(Color::Black);
	}
	int	delta = 55;
	alphabet[0].holderSetPosition(Vector2f(510, 130));
	alphabet[0].textSetString('A');
	alphabet[0].textSetCharacterSize(40);
	alphabet[0].textSetPosition(Vector2f(510, 130));
	alphabet[0].textSetFont(font);

	alphabet[1].holderSetPosition(Vector2f(510 + delta, 130));
	alphabet[1].textSetString('B');
	alphabet[1].textSetCharacterSize(40);
	alphabet[1].textSetPosition(Vector2f(510 + delta, 130));
	alphabet[1].textSetFont(font);

	alphabet[2].holderSetPosition(Vector2f(510 + 2 * delta, 130));
	alphabet[2].textSetString('C');
	alphabet[2].textSetCharacterSize(40);
	alphabet[2].textSetPosition(Vector2f(510 + 2 * delta, 130));
	alphabet[2].textSetFont(font);

	alphabet[3].holderSetPosition(Vector2f(510 + 3 * delta, 130));
	alphabet[3].textSetString('D');
	alphabet[3].textSetCharacterSize(40);
	alphabet[3].textSetPosition(Vector2f(510 + 3 * delta, 130));
	alphabet[3].textSetFont(font);

	alphabet[4].holderSetPosition(Vector2f(510 + 4 * delta, 130));
	alphabet[4].textSetString('E');
	alphabet[4].textSetCharacterSize(40);
	alphabet[4].textSetPosition(Vector2f(510 + 4 * delta, 130));
	alphabet[4].textSetFont(font);

	alphabet[5].holderSetPosition(Vector2f(510 + 5 * delta, 130));
	alphabet[5].textSetString('F');
	alphabet[5].textSetCharacterSize(40);
	alphabet[5].textSetPosition(Vector2f(510 + 5 * delta, 130));
	alphabet[5].textSetFont(font);

	alphabet[6].holderSetPosition(Vector2f(510, 130 + delta));
	alphabet[6].textSetString('G');
	alphabet[6].textSetCharacterSize(40);
	alphabet[6].textSetPosition(Vector2f(510, 130 + delta));
	alphabet[6].textSetFont(font);

	alphabet[7].holderSetPosition(Vector2f(510 + delta, 130 + delta));
	alphabet[7].textSetString('H');
	alphabet[7].textSetCharacterSize(40);
	alphabet[7].textSetPosition(Vector2f(510 + delta, 130 + delta));
	alphabet[7].textSetFont(font);

	alphabet[8].holderSetPosition(Vector2f(510 + 2 * delta, 130 + delta));
	alphabet[8].textSetString('I');
	alphabet[8].textSetCharacterSize(40);
	alphabet[8].textSetPosition(Vector2f(510 + 2 * delta, 130 + delta));
	alphabet[8].textSetFont(font);

	alphabet[9].holderSetPosition(Vector2f(510 + 3 * delta, 130 + delta));
	alphabet[9].textSetString('J');
	alphabet[9].textSetCharacterSize(40);
	alphabet[9].textSetPosition(Vector2f(510 + 3 * delta, 130 + delta));
	alphabet[9].textSetFont(font);

	alphabet[10].holderSetPosition(Vector2f(510 + 4 * delta, 130 + delta));
	alphabet[10].textSetString('K');
	alphabet[10].textSetCharacterSize(40);
	alphabet[10].textSetPosition(Vector2f(510 + 4 * delta, 130 + delta));
	alphabet[10].textSetFont(font);

	alphabet[11].holderSetPosition(Vector2f(510 + 5 * delta, 130 + delta));
	alphabet[11].textSetString('L');
	alphabet[11].textSetCharacterSize(40);
	alphabet[11].textSetPosition(Vector2f(510 + 5 * delta, 130 + delta));
	alphabet[11].textSetFont(font);

	alphabet[12].holderSetPosition(Vector2f(510, 130 + 2 * delta));
	alphabet[12].textSetString('M');
	alphabet[12].textSetCharacterSize(40);
	alphabet[12].textSetPosition(Vector2f(510, 130 + 2 * delta));
	alphabet[12].textSetFont(font);

	alphabet[13].holderSetPosition(Vector2f(510 + delta, 130 + 2 * delta));
	alphabet[13].textSetString('N');
	alphabet[13].textSetCharacterSize(40);
	alphabet[13].textSetPosition(Vector2f(510 + delta, 130 + 2 * delta));
	alphabet[13].textSetFont(font);


	alphabet[14].holderSetPosition(Vector2f(510 + 2 * delta, 130 + 2 * delta));
	alphabet[14].textSetString('O');
	alphabet[14].textSetCharacterSize(40);
	alphabet[14].textSetPosition(Vector2f(510 + 2 * delta, 130 + 2 * delta));
	alphabet[14].textSetFont(font);

	alphabet[15].holderSetPosition(Vector2f(510 + 3 * delta, 130 + 2 * delta));
	alphabet[15].textSetString('P');
	alphabet[15].textSetCharacterSize(40);
	alphabet[15].textSetPosition(Vector2f(510 + 3 * delta, 130 + 2 * delta));
	alphabet[15].textSetFont(font);

	alphabet[16].holderSetPosition(Vector2f(510 + 4 * delta, 130 + 2 * delta));
	alphabet[16].textSetString('Q');
	alphabet[16].textSetCharacterSize(40);
	alphabet[16].textSetPosition(Vector2f(510 + 4 * delta, 130 + 2 * delta));
	alphabet[16].textSetFont(font);

	alphabet[17].holderSetPosition(Vector2f(510 + 5 * delta, 130 + 2 * delta));
	alphabet[17].textSetString('R');
	alphabet[17].textSetCharacterSize(40);
	alphabet[17].textSetPosition(Vector2f(510 + 5 * delta, 130 + 2 * delta));
	alphabet[17].textSetFont(font);

	alphabet[18].holderSetPosition(Vector2f(510, 130 + 3 * delta));
	alphabet[18].textSetString('S');
	alphabet[18].textSetCharacterSize(40);
	alphabet[18].textSetPosition(Vector2f(510, 130 + 3 * delta));
	alphabet[18].textSetFont(font);

	alphabet[19].holderSetPosition(Vector2f(510 + delta, 130 + 3 * delta));
	alphabet[19].textSetString('T');
	alphabet[19].textSetCharacterSize(40);
	alphabet[19].textSetPosition(Vector2f(510 + delta, 130 + 3 * delta));
	alphabet[19].textSetFont(font);

	alphabet[20].holderSetPosition(Vector2f(510 + 2 * delta, 130 + 3 * delta));
	alphabet[20].textSetString('U');
	alphabet[20].textSetCharacterSize(40);
	alphabet[20].textSetPosition(Vector2f(510 + 2 * delta, 130 + 3 * delta));
	alphabet[20].textSetFont(font);

	alphabet[21].holderSetPosition(Vector2f(510 + 3 * delta, 130 + 3 * delta));
	alphabet[21].textSetString('V');
	alphabet[21].textSetCharacterSize(40);
	alphabet[21].textSetPosition(Vector2f(510 + 3 * delta, 130 + 3 * delta));
	alphabet[21].textSetFont(font);

	alphabet[22].holderSetPosition(Vector2f(510 + 4 * delta, 130 + 3 * delta));
	alphabet[22].textSetString('W');
	alphabet[22].textSetCharacterSize(40);
	alphabet[22].textSetPosition(Vector2f(510 + 4 * delta, 130 + 3 * delta));
	alphabet[22].textSetFont(font);

	alphabet[23].holderSetPosition(Vector2f(510 + 5 * delta, 130 + 3 * delta));
	alphabet[23].textSetString('X');
	alphabet[23].textSetCharacterSize(40);
	alphabet[23].textSetPosition(Vector2f(510 + 5 * delta, 130 + 3 * delta));
	alphabet[23].textSetFont(font);

	alphabet[24].holderSetPosition(Vector2f(510 + 2 * delta, 130 + 4 * delta));
	alphabet[24].textSetString('Y');
	alphabet[24].textSetCharacterSize(40);
	alphabet[24].textSetPosition(Vector2f(510 + 2 * delta, 130 + 4 * delta));
	alphabet[24].textSetFont(font);

	alphabet[25].holderSetPosition(Vector2f(510 + 3 * delta, 130 + 4 * delta));
	alphabet[25].textSetString('Z');
	alphabet[25].textSetCharacterSize(40);
	alphabet[25].textSetPosition(Vector2f(510 + 3 * delta, 130 + 4 * delta));
	alphabet[25].textSetFont(font);


	limit.textSetCharacterSize(25);
	limit.textSetFont(font);
	limit.textSetFillColor(Color::Black);
	limit.textSetPosition(Vector2f(360, 10));
	limit.holderSetSize(Vector2f(250, 80));
	limit.holderSetPosition(Vector2f(18, 95));
	limit.spriteSetTexture(texture);
	limit.spriteSetPosition(Vector2f(18, 5));

	grect.setSize(Vector2f(500, 50));
	grect.setOutlineThickness(2);
	grect.setPosition(Vector2f(50, 600));
	grect.setFillColor(Color::Transparent);
	grect.setOutlineColor(Color::Black);


	hangman[1].textureLoadFromFile("other/bg0.bmp");
	hangman[2].textureLoadFromFile("other/bg1.bmp");
	hangman[3].textureLoadFromFile("other/bg2.bmp");
	hangman[4].textureLoadFromFile("other/bg3.bmp");
	hangman[5].textureLoadFromFile("other/bg4.bmp");
	hangman[6].textureLoadFromFile("other/bg5.bmp");
	hangman[7].textureLoadFromFile("other/bg6.bmp");
	hangman[8].textureLoadFromFile("other/end.bmp");

	for (int i = 0; i < 9; i++) {
		hangman[i].spriteSetTexture_(hangman[i].getTexture_());
		hangman[i].spriteSetPosition(Vector2f(0, 0));
	}

} 


NewGame::~NewGame()
{

}

void NewGame::draw(RenderWindow& window)
{
	window.draw(backsprite);
	window.draw(limit.getText());
	window.draw(grect);

	for (int i = 0; i < 26; i++)
	{
		window.draw(alphabet[i].getHolder());
		window.draw(alphabet[i].getText());
	}

}



string NewGame::RandomizeWord()
{

	vector<string>v;
	string word;
	ifstream file("dictionary.txt");

	if (file.is_open())
	{
		while (getline(file, word))
			v.push_back(word);
		int randomline = rand() % v.size();
		word = v.at(randomline);
		file.close();
	}
	return string(word);
}


string NewGame::getLetter(int& n)
{
	string c = alphabet[n].textGetString();
	guessedletter = c;
	return string(c);
}


void NewGame::fillBlankSpaces(const string& choosenWord, RenderWindow& window) {

	for (int i = 0; i < choosenWord.length(); i++)
	{
		window.draw(correctAns[i].getText());
	}
}
void NewGame::drawEmptySpaces(const string& choosenWord, RenderWindow& window)
{
	int xx, y;
	y = 30;
	xx = 600;

	for (int i = 0; i < choosenWord.length(); i++)
	{
		blankets[i].holderSetFillColor(Color::Black);
		blankets[i].holderSetPosition(Vector2f(xx, y + 50));
		xx += 40;
		blankets[i].holderSetSize(Vector2f(30, 4));
		window.draw(blankets[i].getHolder());
	}

	for (int i = 0; i < choosenWord.length(); i++)
	{
		correctAns[i].textSetString(choosenWord[i]);
		correctAns[i].textSetFillColor(Color::Blue);
		correctAns[i].textSetCharacterSize(30);
		correctAns[i].textSetFont(font);
		correctAns[i].textSetPosition(Vector2f(blankets[i].holderGetPositionX(), blankets[i].holderGetPositionY() - 50));

		if (guessed[i]) {

			window.draw(correctAns[i].getText());
		}
	}

	for (int i = 0; i < choosenWord.length(); i++)
	{
		wordLength.insert(choosenWord[i]);
		string c;
		c.push_back(choosenWord[i]);

		if (c == guessedletter) {

			guessed[i] = true;
		}
	}
}


void NewGame::drawHangman(RenderWindow& window, int i)
{
	window.draw(hangman[i].getSprite());
}