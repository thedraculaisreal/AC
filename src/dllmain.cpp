// dllmain.cpp : Defines the entry point for the DLL application.
#include <iostream>
#include <Windows.h>
#include "constant.h"
#include "genCode.h"
#include "esp.h"
#include "detours/detours.h"





static void hook()
{
    while (true)
    {
        resetPointers();
        ESP::setHealth();
        ESP::aimbot();
        Sleep(50);
    }
}

static void console()
{
    AllocConsole();
    FILE* f;
    freopen_s(&f, "CONOUT$", "w", stdout);
    freopen_s(&f, "CONIN$", "r", stdin);
    std::cout << "Console Created" << std::endl;
    while (true)
    {
        std::string input;
        std::cin >> input;

        if (input == "exit")
            break;
        if (input == "up")
            localPlayerPtr->pos.y += 5;
        if (input == "down")
            localPlayerPtr->pos.y -= 5;
        if (input == "forward")
            localPlayerPtr->pos.x += 5;
        if (input == "backward")
            localPlayerPtr->pos.x -= 5;
        if (input == "player")
            std::cout << "Local Player Ptr" << localPlayerPtr << std::endl;
        if (input == "players")
            std::cout << "number of players " << numPlayers << std::endl;
        if (input == "health")
        {
            localPlayerPtr->health += 1000;
            std::cout << "Health: " << localPlayerPtr->health;
        }
    }
    FreeConsole();
}



BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)console, nullptr, 0, nullptr);
        CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)hook, nullptr, 0, nullptr);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

