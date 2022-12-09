#include "utility.hh"
#include <iostream>
using namespace std;

int randomAmountRoom()
{
    srand(time(NULL));
    int random = 0;
    random = rand() % 20 + 20;
    random *= 2;
    return random;
}

int randomReservedNum()
{
    cout << "Duong fixed 2";
    srand(time(NULL));
    int reservedNum = rand() % 89999 + 10000;
    return reservedNum;
}
