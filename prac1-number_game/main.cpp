#include <iostream>
#include <time.h>

using namespace std;

//Version one stop at cannot control enter num and with 0-9
//One function ONLY response one function
int main()
{
    cout << "Welcome!" << endl;
    cout << "Do you want to play the game? Y/N" << endl;

/* 无法限制只输入一个字符

    char input_play;

//    cin.get(input_play);
//    cin >> input_play;
//    cin.getline(input_play);
//    getline(cin,input_play);

    while((tolower(input_play) != 'y') or (tolower(input_play)!= 'n')) {
        cout << "Pls Enter Again!" << endl;
        cin.clear();
        cin.get(input_play);
    }
    cout << input_play;
*/

    string input_play_string;
    getline(cin, input_play_string);

    //play game?
    while (true) {
        //    while((tolower(input_play_string) != 'y') or (tolower(input_play_string)!= 'n')) //string不能用tolower
        while (input_play_string.length() != 1) {
            cin.clear();
            cout << "Pls Enter Again: ";
            getline(cin, input_play_string);
        }

        while((tolower(input_play_string[0]) != 'y') and (tolower(input_play_string[0])!= 'n')) {
            //用and不是or
            cin.clear();
            cout << "Pls Enter Again2: ";
            getline(cin, input_play_string);
        }
        break;
    }
    char input_play_char = input_play_string[0];
    cout << "Enjoy the game!\n" << endl;

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
