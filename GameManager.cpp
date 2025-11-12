#include "GameManager.hpp"
#include "DisplayManager.hpp"
#include <cstdlib>
#include <string>
#include <iostream>
#include <limits>
#include <iomanip>

GameManager::GameManager(AirshipOrderList& airshipOrderList) : m_airshipOrderList(airshipOrderList){};

void GameManager::runStartingScene(const std::string& szScene)
{
    clearScreen();
    std::cout << szScene << "\n";
    promptNextCustomerScene();
};

void GameManager::runCustomerScene(const std::string& szScene)
{
    clearScreen();
    std::cout << szScene << "\n";
    promptCargoInput();
    promptNextCustomerScene();
};

void GameManager::promptCargoInput()
{
    std::string szCustomer;
    std::string szItem;
    int iQuantity = 0;
    double dCost = 0.0;

    std::cout << szLineSpacing << "──────────────────────────────────────────────\n";
    std::cout << szLineSpacing << "         CARGO MANIFEST ENTRY TERMINAL\n";
    std::cout << szLineSpacing << "──────────────────────────────────────────────\n\n";

    std::cout << szLineSpacing << "Captain, input the following details carefully.\n";
    std::cout << szLineSpacing << "One wrong digit and insurance will have your head.\n\n";

    std::cout << szLineSpacing << "Customer / Sender Name: ";
    std::getline(std::cin >> std::ws, szCustomer);

    std::cout << szLineSpacing << "Item Description: ";
    std::getline(std::cin >> std::ws, szItem);

    std::cout << szLineSpacing << "Quantity (units): ";
    while (!(std::cin >> iQuantity) || iQuantity <= 0) {
        std::cin.clear();
        std::cout << szLineSpacing << "Invalid number. Enter a positive integer: ";
    }

    std::cout << szLineSpacing << "Declared Value (credits): ";
    while (!(std::cin >> dCost) || dCost < 0.0) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << szLineSpacing << "Invalid amount. Enter a valid cost: ";
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "\n" << szLineSpacing << "──────────────────────────────────────────────\n\n";
    std::cout << szLineSpacing << "Recording shipment...\n";
    std::cout << szLineSpacing << "Sender:  " << szCustomer << "\n";
    std::cout << szLineSpacing << "Cargo:   " << szItem << "\n";
    std::cout << szLineSpacing << "Units:   " << iQuantity << "\n";
    std::cout << szLineSpacing << "Value:   " << std::fixed << std::setprecision(2)
              << dCost << " credits\n\n";
    m_airshipOrderList.addDelivery(szCustomer, szItem, iQuantity, dCost);
};

void GameManager::promptNextCustomerScene()
{
    std::cout << szLineSpacing << "──────────────────────────────────────────────\n";
    std::cout << szLineSpacing << "             PRESS ENTER TO CONINTUE\n";
    std::cout << szLineSpacing << "──────────────────────────────────────────────\n";

    std::string iUserInput;
    std::getline(std::cin, iUserInput);
};

void GameManager::clearScreen() {
#ifdef _WIN32
    std::system("cls");   
#else
    std::cout << "\033[2J\033[1;1H";  
#endif
}
