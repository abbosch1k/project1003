#include <iostream>
#include <fstream>
using namespace std;

int main() {

    string note;

    cout << "Enter note: ";
    getline(cin, note);

    ofstream file("note.txt");

    file << note;

    file.close();

    cout << "Note saved!";

    return 0;
}
