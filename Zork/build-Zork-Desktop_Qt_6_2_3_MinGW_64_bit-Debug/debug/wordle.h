/*#ifndef WORDLE_H
#define WORDLE_H

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstring>
using namespace std;

class Wordle
{
public:
    Wordle();
    void valid_guesses(string fileName);
    void solution(string fileName);


};

#endif // WORDLE_H
