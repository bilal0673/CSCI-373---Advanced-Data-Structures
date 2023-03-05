#include <iostream>
#include "Scores.h"

using namespace std;

int main() {
    Scores scores(5);

    // add 4 game entries with different scores
    scores.add(GameEntry("Anna", 10));
    scores.add(GameEntry("John", 5));
    scores.add(GameEntry("Chris", 15));
    scores.add(GameEntry("Jack", 8));

    cout << "All game entries:\n";
    scores.printAll();

    // add 3 more game entries with scores between the first 4
    scores.add(GameEntry("Bilal", 6));
    scores.add(GameEntry("Rayan", 12));
    scores.add(GameEntry("King", 9));

    cout << "All game entries after adding 3 more:\n";
    scores.printAll();

    // remove the first game entry
    scores.remove(0);

    cout << "All game entries after removing first entry:\n";
    scores.printAll();

    return 0;
}
