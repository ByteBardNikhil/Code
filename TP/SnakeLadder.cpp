#include <iostream>
#include <cstdlib>
using namespace std;
const int BOARD_SIZE = 100, WINNING_POSITION = 100;

int dice() { return rand() % 6 + 1; }
int move(int cp, int dr)
{
    int np = cp + dr;
    switch (np)
    {
    case 3:
        np = 39;
        break;
    case 10:
        np = 12;
        break;
    case 27:
        np = 53;
        break;
    case 56:
        np = 84;
        break;
    case 61:
        np = 99;
        break;

    // Snakes
    case 16:
        np = 7;
        break;
    case 37:
        np = 17;
        break;
    case 49:
        np = 38;
        break;
    case 78:
        np = 39;
        break;
    case 86:
        np = 23;
        break;
    case 92:
        np = 72;
        break;
    case 95:
        np = 75;
        break;
    case 98:
        np = 79;
        break;

    default:
        break;
    }
    return np;
}

int main()
{
    srand(static_cast<unsigned>(time(0)));
    int pp = 1;
    cout << "\nWelcome to snake ladder game ";
    while (pp < WINNING_POSITION)
    {
        int dr = dice();
        cout << "\nYou rolled a " << dr;
        pp = move(pp, dr);
        cout << "\nNew Position : " << pp;
        if (pp == WINNING_POSITION && pp <= 100)
            cout << "\nCongratulations you won";
        else
        {
            cout << "\nPress enter to roll the dice again ";
            cin.ignore();
        }
    }
}
