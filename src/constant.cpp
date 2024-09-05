#pragma once
#include "constant.h"
#include <iostream>

HMODULE hModule = GetModuleHandle(nullptr);
uintptr_t exeBaseAddress = (uintptr_t)GetModuleHandle(nullptr);

extern Player* localPlayerPtr = *(Player**)(exeBaseAddress + 0x0017E0A8);

uintptr_t playersAddr = exeBaseAddress + 0x18AC04;
extern EntityList* players = *(EntityList**)playersAddr;

extern int numPlayers = *(int*)(exeBaseAddress + 0x191FD4);

void resetPointers()
{
	localPlayerPtr = *(Player**)(exeBaseAddress + 0x0017E0A8);
	players = *(EntityList**)(playersAddr);
	numPlayers = *(int*)(exeBaseAddress + 0x191FD4);
}

void Fuckniggers()
{
	std::cout << "black ass niggers";
}