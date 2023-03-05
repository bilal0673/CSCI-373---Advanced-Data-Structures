#ifndef GENODE_H_
#define GENODE_H_

#include "GameEntry.h"
#include <iostream>
#include <string>
using namespace std;

class GENode { // a node in a list of strings
private:
	GameEntry elem; // element value
	GENode* next; // next item in the list
	friend class Scores; // provide StringLinkedList access
};


#endif