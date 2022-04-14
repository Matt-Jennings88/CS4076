/*#include "wordle.h"

Wordle::Wordle()
{
    valid_guesses(D:/zork/valid_guesses.txt);
    answer_key(D:/zork/wordle_answers.txt);
    guess_counter = 0;
    game_win = false;
}

void Wordle::valid_guesses(string fileName)
{
    fstream gssFile;
    gssFile.open(fileName, ios::in);
    if(gssFile.is_open())
    {
        string tmp;
        while(getline(gssFile, tmp))
        {
            guess_word.push_back(tmp);
        }
        gssFile.close();
    }
}

void Wordle::answer_key(string fileName)
{
    fstream ansFile;
    string input;
    srand(time(0));
    int randNum;
    randNum = rand() % 2315 + 1;
    ansFile.open(fileName, ios::in);
    if(ansFile.is_open())
    {
        for(int i = 0; i < randNum; i++)
        {
            getline(ansFile, input);
            answer = input;
        }
        ansFile.close();
    }
}

bool Wordle::checkLetter()
{

}

*/
