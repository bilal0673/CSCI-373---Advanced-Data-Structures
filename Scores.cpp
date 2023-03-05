#include "Scores.h"

Scores::Scores (int maxEnt):
maxEntries (maxEnt),
numEntries (0),
head (NULL),
tail (NULL)
{

}


Scores::~Scores ()
{
  while (head != NULL)
    {
      GENode *temp = head;
      head = head->next;
      delete temp;
    }
}

void
Scores::add (const GameEntry & e)
{
  GENode *newNode = new GENode;
  newNode->entry = e;
  newNode->next = NULL;

  if (numEntries == 0)
    {
      head = newNode;
      tail = newNode;
    }
  else if (numEntries == maxEntries)
    {
      GENode *temp = head;
      head = head->next;
      delete temp;
      tail->next = newNode;
      tail = newNode;
    }
  else
    {
      tail->next = newNode;
      tail = newNode;
    }

  numEntries++;
}

GameEntry
Scores::remove (int i)
{
  if (i < 0 || i >= numEntries)
    {
      throw std::out_of_range ("Invalid index");
    }

  GENode *prev = NULL;
  GENode *curr = head;
  for (int j = 0; j < i; j++)
    {
      prev = curr;
      curr = curr->next;
    }

  GameEntry removedEntry = curr->entry;
  if (curr == head)
    {
      head = curr->next;
    }
  else
    {
      prev->next = curr->next;
    }

  if (curr == tail)
    {
      tail = prev;
    }

  delete curr;
  numEntries--;

  return removedEntry;
}

void Scores::printAll() const {
    cout << "Scoreboard:\n";
    GENode* curr = head;
    while (curr != NULL) {
        cout << "Name: " << curr->entry.getName() << ", Score: " << curr->entry.getScore() << std::endl;
        curr = curr->next;
    }
}
