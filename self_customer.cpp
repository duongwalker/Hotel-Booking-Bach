#include "self_customer.hh"
#include <vector>
using namespace std;
Customer::Customer()
{
    int reservedNumber = randomReservedNum();
    this->setReservationNumber(reservedNumber);
}

void Customer::setName(string name)
{
    this->name = name;
};

void Customer::setRentedRooms(int _rentedRooms[], int n)
{
    this->rented_Rooms.assign(_rentedRooms, _rentedRooms + n);
};

void Customer::setRentedDays(int _rentedDays[], int n)
{
    this->rented_Days.assign(_rentedDays, _rentedDays + n);
};

void Customer::setReservationNumber(int reservedNumber)
{
    this->reservation_num = reservedNumber;
};

int Customer::getReservationNumber()
{
    return this->reservation_num;
}

void Customer::setCustomerInfo(string name, int rented_rooms[], int rented_days[], int n)
{

    this->name = name;
    this->setRentedDays(rented_days, n);
    this->setRentedRooms(rented_rooms, n);
};

void Customer::getCustomerInfo()
{
    cout << "Reservation number: " << this->reservation_num << endl;
    cout << "Name: " << this->name << endl;
    cout << "You booked: " << this->getTotalRoom() << " rooms" << endl;
    cout << "Rented rooms: ";
    for (int e : this->rented_Rooms)
    {
        cout << e + 1 << " ";
    }
    cout << endl;
    // cout << "Number of rented days: " << this->rented_Days << endl;
}

void Customer::setTotalRoom(int total_room)
{
    this->totalRoom = total_room;
}

int Customer::getTotalRoom()
{
    return this->totalRoom;
}

string Customer::getName()
{
    cout << this->name << endl
         << endl
         << endl
         << endl
         << endl;
    return this->name;
}
