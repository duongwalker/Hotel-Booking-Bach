#include "self_hotel.hh"
#include <time.h>

void Hotel::setRoomNum(Room *rooms)
{
    for (int i = 0; i < 80; i++)
    {
        rooms[i].setRoomNum(i);
    }
}

Hotel::Hotel()
{
    int amountRoom = randomAmountRoom();
    this->totalRooms = amountRoom;
    this->rooms = new Room[amountRoom];

    int midRoomNumber = amountRoom / 2;
    for (int i = 0; i < amountRoom; i++)
    {
        if (i < midRoomNumber)
        {
            this->rooms[i].setRoomInfo(100, true, false, 1, 0, i);
        }
        else
        {
            this->rooms[i].setRoomInfo(150, false, false, 1, 0, i);
        }
    }

    // First half are single rooms
    // Second half are double rooms
    cout << "Hotel has " << amountRoom << " rooms" << endl;
}

void Hotel::addCustomer(Customer *a)
{
    customer[totalUser] = *a;
    totalUser += 1;
};

bool Hotel::booking(int days[], Customer *a)
{
    string customerName = "";
    int singleRoomAmount = 0;
    int roomAmount = 0;
    int roomSingleBooked = 0;
    int roomDoubleBooked = 0;
    int daysIndex = 0;
    int *rent_room = new int[80];
    int rent_room_index = 0;

    cout << "What is your name? ";
    cin.ignore();
    getline(cin, customerName);
    a->setName(customerName);

    cout << "Enter number of rooms: ";
    cin >> roomAmount;
    a->setTotalRoom(roomAmount);

    cout << "Enter number of single rooms: ";
    cin >> singleRoomAmount;
    cout << endl;
    int doubleRoomAmount = roomAmount - singleRoomAmount;
    int singleRoomNums[singleRoomAmount];

    // Book single rooms randomly
    for (int i = 0; i < this->totalRooms / 2; i++)
    {
        if (rooms[i].isReserved())
        {
            continue;
        }
        rooms[i].setReserved(true);
        rooms[i].setRentDays(days[daysIndex]);
        roomSingleBooked++;
        daysIndex++;
        rent_room[rent_room_index] = i;
        rent_room_index++;
        cout << "Room single " << i + 1 << " is booked for this customer" << endl;
        this->rooms[i].getRoomInfo();
        if (roomSingleBooked == singleRoomAmount)
        {
            break;
        }
    }

    // Book double rooms randomly
    for (int i = this->totalRooms / 2; i < this->totalRooms; i++)
    {
        if (rooms[i].isReserved())
        {
            continue;
        }
        rooms[i].setReserved(true);
        rooms[i].setReservationNumber(a->getReservationNumber());
        rooms[i].setRentDays(days[daysIndex]);
        roomDoubleBooked++;
        daysIndex++;
        rent_room[rent_room_index] = i;
        rent_room_index++;
        cout << "Room double " << i + 1 << " is booked for this customer" << endl;
        this->rooms[i].getRoomInfo();
        if (roomDoubleBooked == doubleRoomAmount)
        {
            break;
        }
    }
    a->setCustomerInfo(customerName, rent_room, days, roomAmount);

    return true;
};

void Hotel::display(Customer *a)
{
    cout << "Duong fixed 2";
    a->getCustomerInfo();
};





