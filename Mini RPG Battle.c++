#include <iostream>
using namespace std;

int main() {

    int playerHP = 100;
    int monsterHP = 60;

    while(playerHP > 0 && monsterHP > 0) {

        cout << "\nPlayer HP: "
             << playerHP
             << endl;

        cout << "Monster HP: "
             << monsterHP
             << endl;

        monsterHP -= 20;

        if(monsterHP > 0)
            playerHP -= 15;
    }

    if(playerHP > 0)
        cout << "\nVictory!";
    else
        cout << "\nDefeat!";

    return 0;
}
