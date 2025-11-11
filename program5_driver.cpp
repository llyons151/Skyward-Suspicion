#include "AirshipOrderList.hpp"
#include "DisplayManager.hpp"
#include "GameManager.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
    DisplayManager displayManager;
    GameManager gameManager;

    displayManager.displayStartingScene();
    gameManager.promptNextScene();
    displayManager.clearScreen();


    displayManager.displayCustomerOne();
    return 0;
}
