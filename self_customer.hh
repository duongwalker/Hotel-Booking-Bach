#include <iostream>
#include "utility.hh"
#include <vector>
using namespace std;

class Customer
{

private:
    string name = "";
    vector<int> rented_Days;
    vector<int> rented_Rooms;
    int amountRentRoom = 0;
    int reservation_num = 0;
    int totalRoom = 0;

public:
    Customer();
    void getCustomerInfo();
    void setName(string);
    string getName();
    void setRentedRooms(int[], int n);
    void setRentedDays(int[], int n);
    void setReservationNumber(int);
    int getReservationNumber();
    void setCustomerInfo(string, int[], int[], int n);
    void setTotalRoom(int);
    int getTotalRoom();
};
