#include <string.h>
#include <libchessviz/command.h>
#include <libchessviz/helper.h>

void ChangeFlag(int code, int console, int txt, int html)
{
    switch (code) {
    case 2:
        if (console) console = 0;
        else console = 1;
        break;
    case 3:
        if (txt) txt = 0;
        else txt = 1;
        break;
    case 4:
        if (html) html = 0;
        else html = 1;
        break;
    }
}

int DefineFlag(char flag[64])
{
    int code = 11;

    if (strcmp(flag, "--console") == 0)
        code = 2;
    if (strcmp(flag, "--txt") == 0)
        code = 3;
    if (strcmp(flag, "--html") == 0)
        code = 4;

    return code;
}

int DefineCommand(char command[64])
{
    int length = strlen(command), i, code = 0;

    if (strncmp(command, "chessviz ", 9) != 0) {
        if (strcmp(command, "chessviz") == 0)
            code = 1;
        else
            code = 10;
    }

    if (strncmp(command, "exit", 4) == 0)
        code = -1;

    if (code == 0) {
        for (i = 9; i < length; i++)
            command[i - 9] = command[i];
        for (i = length - 9; i < length; i++)
            command[i] = '\0';

        if ((command[0] == '-') && (command[1] == '-'))
            code = DefineFlag(command);
        else {
            length = strlen(command);
            if (((command[length - 4] != '.') && (command[length - 3] != 't')
                 && (command[length - 2] != 'x')
                 && (command[length - 1] != 't'))
                || (length <= 4))
                code = 12;
        }
    }

    return code;
}
