#include "GameManager.hpp"
#include <string>
#include <iostream>

void GameManager::promptNextScene()
{
    std::cout << "    ──────────────────────────────────────────────\n";
    std::cout << "                Enter 1 To Continue \n";
    std::cout << "                Enter -1 To Exit \n";
    std::cout << "    ──────────────────────────────────────────────\n";

    int iUserInput;
    std::cin >> iUserInput;

    if (iUserInput == -1)
    {
        std::cout << "Goodbye, Captain.\n";
        exit(0); 
    };
};
