#include <iostream>
#include "self_customer.hh"
#include "self_room.hh"
#include "utility.hh"
using namespace std;

class Hotel
{

private:
    int totalUser = 0;
    int currentUser;
    Room *rooms;
    Customer customer[1000];
    int totalRooms = 0;

public:
    Hotel();
    void setRoomNum(Room *);
    void addCustomer(Customer *);
    void display(Customer *);
    bool booking(int[], Customer *);
    int edit();
    int duongfixed2();
  
};