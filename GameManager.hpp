#pragma once
#include "DisplayManager.hpp"
#include "AirshipOrderList.hpp"
#include <string>

class GameManager{
    private:
        const char* szLineSpacing = "        ";
        AirshipOrderList& m_airshipOrderList;

    private:
        void promptCargoInput();
        void promptNextCustomerScene();
        void clearScreen();

    public:
        GameManager(AirshipOrderList& airshipOrderList);
        void runCustomerScene(const std::string& szScene);
        void runStartingScene(const std::string& szScene);
};
