
// Mad Lib
// Servando Fernandez

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
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
        {"item",""},
        {"animal or object", ""},
        {"anything", ""},
        {"room in house", ""},
        {"title of person or animal", ""},
        {"name", ""},
        // Add more entries as needed
    };
    
    cout << "1: Enter a place " << entries[0].type << ": ";
    cin >> entries[0].input;
    cout << "2: Enter a adjective " << entries[1].type << ": ";
    cin >> entries[1].input;

    cout << entries[0].type << " is " << entries[0].input << " and " << entries[1].type << " is " << entries[1].input;

	(void)_getch();
	return 0;
}
