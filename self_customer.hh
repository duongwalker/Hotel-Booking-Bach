#include <iostream>
#include "utility.hh"
using namespace std;

class Customer{

    private:
        string name = "Alo";
        int rented_Days = 0;
        // int rented_Rooms[80] = {0};
        int *rented_Rooms;
        int amountRentRoom = 0;
        int reservation_num = 0;

        int totalRoom = 0;
    public:
        Customer(bool);
        void getCustomerInfo();
        void setName(string);
        string getName();
        void setRentedRooms(int[]);
        void setRentedDays(int);
        void setReservationNumber(int);
        int getReservationNumber();
        void setCustomerInfo(string, int[], int);

        Customer();
        void setTotalRoom(int);
        int getTotalRoom();
    
};



