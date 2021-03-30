#pragma once
#ifndef COMMAND_H
#define COMMAND_H
#include <libchessviz/helper.h>

void ChangeFlag(int code, int console, int txt, int html);
int DefineFlag(char flag[S]);
int DefineCommand(char command[S]);

#endif /* COMMAND_H */
