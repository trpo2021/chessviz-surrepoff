#include <string.h>

#include <libchessviz/helper.h>

const int SIZE_OF_CHESSBOARD = 9;
const long long unsigned int SIZE_OF_COMMAND = 64;
const long long unsigned int SIZE_OF_LINE = 32;
const long long unsigned int SIZE_OF_MOVE = 16;
const long long unsigned int SIZE_OF_MOVENUMBER = 8;

void ShiftString(char* string, long long unsigned int step)
{
    long long unsigned int i;
    for (i = 0; i < strlen(string) - (step - 1); i++)
        string[i] = string[i + step];
    for (i = 0; i < step; i++)
        string[strlen(string)] = '\0';
}
