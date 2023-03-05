#ifndef GameEntry_H_
#define GameEntry_H_

#include <iostream>
#include <string.h>
using namespace std;
#include <ctime>

class GameEntry {
public:

	GameEntry(const string& n="", int s=0); // constructor
	~GameEntry();

	string getName() const; // get player name, this is a constant inside this member function
	int getScore() const; // get score

public:
	string name; // player’s name
	int score; // player’s score
//	string dateTime;
};

#endif /* GameEntry_H_ */
