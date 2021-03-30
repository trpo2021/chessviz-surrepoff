#pragma once
#ifndef COMMAND_H
#define COMMAND_H
#include <libchessviz/helper.h>

void ChangeFlag(int code, int console, int txt, int html);
int DefineFlag(char flag[64]);
int DefineCommand(char command[64]);

#endif /* COMMAND_H */
