#ifndef SCORES_H_
#define SCORES_H_

#include "GENode.h"
#include <iostream>
#include <string>
using namespace std;

// Class IndexOutOfBounds definition
class IndexOutOfBounds {
public:
// Parameterized constructor
	IndexOutOfBounds (string);
};
// End of class

// Class Scores definition
class Scores {
public:
    Scores(int maxEnt = 10);   // constructor
    ~Scores();                 // destructor
    void add(const GameEntry& e);
    GameEntry remove(int i);
    void printAll() const;

private:
    struct GENode {
        GameEntry entry;
        GENode* next;
    };

    int maxEntries;  // maximum number of entries
    int numEntries;  // actual number of entries
    GENode* head;      // head of the singly linked list
    GENode* tail;      // end of the singly linked list
};

#endif /* SCORES_H */
