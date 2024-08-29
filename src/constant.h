#pragma once
#include <Windows.h>
#include "genCode.h"
#include <vector>

extern HMODULE hModule;
extern uintptr_t exeBaseAddress;
extern Player* localPlayerPtr;
extern EntityList* players;
extern int numPlayers;


void resetPointers();