#include"sound.h"
#include<SFML/Audio.hpp>
#include<iostream>
using namespace std;
using namespace sf;

GameSound :: GameSound(string file) {
	filename = file;
	try {
		buffer.loadFromFile(file);
	}
	catch (const char* msg) {
		cerr << msg << endl;
	}
	sound.setBuffer(buffer);
}

void GameSound :: loadFile(string file) {
	try {
		buffer.loadFromFile(file);
	}
	catch (const char* msg) {
		cerr << msg << endl;
	}
	sound.setBuffer(buffer);
}