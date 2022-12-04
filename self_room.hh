#include <iostream>
using namespace std;

class Room
{
private:
    int room_num = 0;
    int room_price = 0;
    bool is_single = true;
    bool is_reserved = true;
    bool is_available = true;
    int discount = 0;
    int totalRoom = 0;
    int reservation_num = 0;
    int rent_days = 0;
public:
    Room();
    void getRoomInfo();
    void setPrice(int);
    bool isSingleRoom();
    bool isReserved();
    void setReserved(bool);
    void setReservationNumber(int);
    int getReservationNumber();
    void setDiscount(int);
    int getDiscount();
    void setRentDays (int);
    int getRentDays();
    
    void setRoomNum(int);
    int getRoomNum();
    
    void setRoomInfo(int, bool, bool, int, int, int);
    
};