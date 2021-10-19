#include <iostream>
#include <time.h>

using namespace std;

//Restrict input to only one character
bool input_oneLetter_oneLine(string letter) {
    getline(cin, letter);

    while(letter.length() != 1) {
        cin.clear();
        cout << "Pls enter ONLY one letter for each line: ";
        getline(cin, letter);
    }

    return true;
};

//Judge input Y and N
char input_Y_N(string letter) {
    bool oneLetter = input_oneLetter_oneLine(letter);
    while (oneLetter) {
        while((tolower(letter[0]) != 'y') and (tolower(letter[0])!= 'n')) {
            cin.clear();
            cout << "Pls enter ONLY Y/y OR N/n : ";
            getline(cin, letter);
        }
        break;
    }

    return tolower(letter[0]);
}

int main()
{
    cout << "Welcome!" << endl;
    cout << "Do you want to play the game? Y/N" << endl;

    //play game?
    string play_game;
    cin >> play_game;
    play_game = input_Y_N(play_game);
    if (play_game == "y") {
        cout << "Enjoy the game!\n" << endl;
    } else {return 0;}

    //generate random-num
    int result = 0;
    srand(time(0));
    result = rand()%10;

    //record game_round-num
    while (true) {
        int game_round_num = 0;

        //generate a player-num
        cout << "Enter your num: ";
//        int player_num;
        char player_num;
        //judge player-num is a 0-9 num.
        cin >> player_num; cout << "You enter: " << player_num << ", Type: " << typeid (player_num).name();
        while ((player_num < 0) or (player_num > 9) ) {
            cin.clear();
            cout << "Enter your num again: ";
            cin >> player_num;
            cout << player_num;
        }
        break;
    }


    //compare random-num & player-num

    return 0;
}
