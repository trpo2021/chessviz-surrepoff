#pragma once
#ifndef COMMAND_H
#define COMMAND_H
#include <libchessviz/helper.h>

void ChangeFlag(int code, int console, int txt, int html);
int DefineFlag(char flag[SIZE_OF_COMMAND]);
int DefineCommand(char command[SIZE_OF_COMMAND]);

#endif /* COMMAND_H */
