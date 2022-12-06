#include "self_room.hh"
#include <iostream>
#include <time.h>
using namespace std;

Room::Room()
{
    this->room_price = 0;
    this->is_reserved = false;
}

void Room::getRoomInfo()
{
    cout << "Room number: " << this->room_num << endl;
    cout << "Room price: " << this->room_price << endl;
    cout << "Room discount: " << this->discount << endl;
    cout << (this->is_single ? "This is a single room" : "This is a double room") << endl;

    if (this->is_reserved)
    {
        cout << "This room is available";
    }
    else
    {
        cout << "This room has been reserved for " << this->rent_days << " days" << endl;
    }

    cout << endl;
};

void Room::setReserved(bool _available)
{
    this->is_reserved = _available;
};

void Room::setPrice(int price)
{
    this->room_price = price;
};

void Room::setDiscount(int randDiscount)
{
    srand(time(NULL));
    randDiscount = (rand() % 2 * 10) / 100;
    this->discount = randDiscount;
    cout << "The discount are " << randDiscount << endl;
};

bool Room::isSingleRoom()
{
    return this->is_single;
};

bool Room::isReserved()
{
    return this->is_reserved;
}

void Room::setReservationNumber(int reservation_num)
{
    this->reservation_num = reservation_num;
};

int Room::getReservationNumber()
{
    return this->reservation_num;
};

void Room::setRoomInfo(int price, bool is_single, bool _reserved, int discount, int reserved_num, int room_num)
{
    this->room_price = price;
    this->is_single = is_single;
    this->is_reserved = _reserved;
    this->discount = discount;
    this->room_num = room_num;
    this->reservation_num = reserved_num;
};

void Room::setRentDays(int days)
{
    this->rent_days = days;
}

int Room::getRentDays()
{
    return this->rent_days;
}

int Room::getDiscount()
{
    cout << "The discount is " << this->discount << endl;
    return this->discount;
}

void Room::setRoomNum(int roomNum)
{
    this->room_num = roomNum;
}

int Room::getRoomNum()
{
    return this->room_num;
}