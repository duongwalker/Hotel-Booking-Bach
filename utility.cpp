#include "utility.hh"

int randomAmountRoom(){
    srand(time(NULL));
    int random = 0;
    random = rand()%20 +20;
    random *= 2;
    return random;
}

int randomReservedNum(){
    srand(time(NULL));
    int reservedNum = rand()%89999 + 10000;
    return reservedNum;
}
