//Servando Fernandez
// Mad Lib
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main() {
    struct Entry {
        string type;
        string input;
    };

    Entry entries[] = {
        {"place", ""},
        {"adjective", ""},
        {"noun", ""},
        {"famous person", ""},
        {"verb", ""},
        {"animal", ""},
        {"place", ""},
        {"Person or animal", ""},
        {"action towards someone", ""},
        {"item", ""},
        {"animal or object", ""},
        {"anything", ""},
        {"room in house", ""},
        {"title of person or animal", ""},
        {"name", ""}
    };

    int entriesAmount = sizeof(entries) / sizeof(entries[0]);

    // Get all inputs with support for multi-word answers
    for (int i = 0; i < entriesAmount; i++) {
        cout << i + 1 << " [ENTER] " << entries[i].type << ": ";
        getline(cin, entries[i].input);
    }

    // Print the story
    cout << "\n--- Your Mad Lib Story ---\n\n";
    cout << "In the heart of " << entries[0].input << ", a " << entries[1].input
        << " " << entries[2].input << " stood tall. Suddenly, " << entries[3].input
        << " appeared and decided to " << entries[4].input << " with a wild " << entries[5].input
        << ". They all traveled to " << entries[6].input << ", where they met a mysterious "
        << entries[7].input << " who would always " << entries[8].input << " with a magical "
        << entries[9].input << ". But then, a rogue " << entries[10].input
        << " stole " << entries[11].input << " and hid it in the " << entries[12].input
        << ". Only the " << entries[13].input << " named " << entries[14].input
        << " could save the day!\n";

    _getch();
    return 0;
}
