#include "AirshipOrderList.hpp"

AirshipOrderList::AirshipOrderList() : pHead(nullptr) {};

AirshipOrderList::~AirshipOrderList()
{
    Delivery* current = pHead;
    Delivery* nextNode; 
    while(current != nullptr)
    {
        nextNode = current->pNext;
        delete current;
        current = nextNode;
    };
};

void AirshipOrderList::addDelivery(std::string szCust, std::string szItm, int iQty, double dCst)
{
    Delivery* newDelivery = new Delivery(szCust, szItm, iQty, dCst);

    if(pHead == nullptr)
    {
        pHead = newDelivery;
        return;
    };

    Delivery* current = pHead;
    while(current->pNext != nullptr)
    {
        current = current->pNext;
    };
    current->pNext = newDelivery;
};

Delivery* AirshipOrderList::findDelivery(std::string szCust, std::string szItm) const
{
    Delivery* current = pHead;

    while(current != nullptr)
    {
        if(current->szName == szCust && current->szItem == szItm) return current;
        current = current->pNext;
    };
    return nullptr;
};


bool AirshipOrderList::removeDelivery(string szCust, string szItm)
{
    if(pHead == nullptr) return false;

    if(pHead->szName == szCust && pHead->szItem == szItm)
    {
        Delivery* temp = pHead;
        pHead = pHead->pNext;
        delete temp;
        return true;
    };

    Delivery* prev = pHead;
    Delivery* current = pHead->pNext;

    while(current != nullptr)
    {
        if(current->szName == szCust && current->szItem == szItm)
        {
            prev->pNext = current->pNext;
            delete current;
            return true;
        };
        prev = current;
        current = current->pNext;
    };
    return false;
};
