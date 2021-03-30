#include <string.h>

#include <libchessviz/helper.h>

void ShiftString(char* string, long long unsigned int step)
{
    long long unsigned int i;
    for (i = 0; i < strlen(string) - (step - 1); i++)
        string[i] = string[i + step];
    for (i = 0; i < step; i++)
        string[strlen(string)] = '\0';
}
