#include<SFML/Audio.hpp>
#include<iostream>
using namespace std;
using namespace sf;


class GameSound {

	SoundBuffer buffer;
	Sound sound;
	string filename;

public:

	GameSound(){}
	~GameSound(){}
	GameSound(string file);

	void loadFile(string file);
	void play() {sound.play();}
};