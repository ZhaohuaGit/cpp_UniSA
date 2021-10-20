#include <iostream>
#include <time.h>
#include <string>

using namespace std;

//Restrict input to only one character
bool input_oneLetter_oneLine(string letter) {
    bool is_oneLetter = true;
    if(letter.length() != 1) {
        cin.clear();
        cout << "Pls enter ONLY one letter for each line: ";
        is_oneLetter = false;
    }

    return is_oneLetter;
};

//Judge input Y and N
bool input_Y_N(string letter) {
    bool is_YN = true;
    while (input_oneLetter_oneLine(letter) == false) {
         cin >> letter;
    }
    if ((tolower(letter[0]) != 'y') and (tolower(letter[0])!= 'n')) {
        cin.clear();
        cout << "Pls enter ONLY Y/y OR N/n : ";
        is_YN = false;
    }
    return is_YN;

}

//judge player-num is a 0-9 num.
bool input_num_09(string play_num) {
    bool is_num_09 = true;
    while (input_oneLetter_oneLine(play_num) == false) {
         cin >> play_num;
    }
    if ((play_num[0] < '0') or (play_num[0] > '9')) {
        cin.clear();
        cout << "Enter your num 0-9: ";
        is_num_09 = false;
    }
    return is_num_09;
}

int main()
{
    cout << "Welcome!" << endl;
    cout << "Do you want to play the game? Y/N" << endl;

    //play game?
    string play_game; cin >> play_game;
    while (input_Y_N(play_game) == false ) {
        cin >> play_game;
//        input_Y_N(play_game);
    }

    if (play_game == "y") {
        cout << "Enjoy the game!\n" << endl;
    } else {return 0;}

    //generate random-num
    int random_num = 0;
    srand(time(0));
    random_num = rand()%10;

    //record game_round-num
    int round_num = 0; int player_num = 0; //一定要把值初始化

    cout << "Enter your num: ";
    while (random_num != player_num) {
        round_num = round_num +1;
        string string_play_num; cin >> string_play_num;
        while(input_num_09(string_play_num) == false) {
            cin >> string_play_num;
        }
        player_num = stoi(string_play_num);
    }

    cout << round_num;


    //compare random-num & player-num

    return 0;
}
