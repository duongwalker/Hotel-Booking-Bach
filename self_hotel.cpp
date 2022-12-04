#include "self_hotel.hh"
#include <time.h>  



void Hotel::setRoomNum(Room *rooms) {
    for (int i = 0; i < 80; i++) {
        rooms[i].setRoomNum(i);
    }
}



Hotel::Hotel(){
    int amountRoom = randomAmountRoom();
    this->totalRooms = amountRoom;
    this->rooms = new Room[amountRoom];

    int midRoomNumber = amountRoom / 2;
    for (int i = 0; i < amountRoom; i++) {
        if (i  < midRoomNumber){
            // fix room info discount
            this->rooms[i].setRoomInfo(100, true, true, 1, 0, i);
        }
        else {
            this->rooms[i].setRoomInfo(150, false, true, 1, 0, i);
        }

    }

    cout << "Hotel has "<< amountRoom<< " rooms"<< endl;
    // First half are single rooms
    // Second half are double rooms
}


void Hotel::addCustomer(Customer *a) {
    customer[totalUser] = a;
    totalUser += 1;
};


bool Hotel::booking(string name, int roomAmount, int days[], int singleRoomAmount, Customer* a) {

    int doubleRoomAmount = roomAmount - singleRoomAmount;
    int roomSingleBooked = 0;
    int roomDoubleBooked = 0;
    int daysIndex = 0;
    int singleRoomNums[singleRoomAmount];

    cout << "What is your name? ";
    getline (cin, name);
    a->setName(name);


    cout << "How many rooms do you want to book? ";
    cin >> roomAmount;
    a->setTotalRoom(roomAmount);
    

    cout << "How many single rooms do you want to book? ";
    cin >> singleRoomAmount;
    cout << endl;

    //Book single rooms randomly
    for (int i = 0; i < this->totalRooms/2; i++) {
        if(rooms[i].isReserved()){
            continue;
        }
        rooms[i].setReserved(false);
        rooms[i].setRentDays(days[daysIndex]);
        roomSingleBooked++;
        daysIndex++;


        a->setRentedRooms(rooms[i].getRoomNum());  
        if (roomSingleBooked == singleRoomAmount) {
            break;
        }        
    }
    //a->setRentedRooms(rentedrooms);
    
    //Book double rooms randomly
    for (int i = this->totalRooms/2; i <this->totalRooms; i++) {
        if (rooms[i].isReserved()) {
            continue;
        }
        rooms[i].setReserved(false);
        rooms[i].setReservationNumber(a->getReservationNumber());
        rooms[i].setRentDays(days[daysIndex]);
        roomDoubleBooked++;
        daysIndex++;
        a->setRentedRooms(rooms[i].getRoomNum());  
        if(roomDoubleBooked == doubleRoomAmount) {
            break;
        }

    }
    
    for(int i = 0; i< this->totalRooms; i++){
        if(this->rooms[i].getReservationNumber() != a->getReservationNumber()){
            continue;
        }
        else {
            this->rooms[i].getRoomInfo();
        }
    }
    return true;
};

void Hotel::display(Customer* a) {
    a->getCustomerInfo();
    
    
};





// Code cua A Bach

// // Loop to book a single room
//     for(int i=0; i < this->totalRooms/2; i++){
//         if(rooms[i].isReserved()){
//             continue;
//         }
//         rooms[i].setReservationNumber(a.getReservationNumber());
//         //cout <<"\n rent day: " << days[daysIndex];
//         rooms[i].setRentDays(days[daysIndex]);
//         rooms[i].setReserved(true);
//         roomSingleBooked++;
//         daysIndex++;
//         if (roomSingleBooked == singleRoomAmount) break;
//     }
//     if (roomSingleBooked < singleRoomAmount){
//         cout << "\nNot enough single rooms" << endl;
//         return false;
//     }
// Loop to book a double room

    // for (int i = totalRooms/2; i <this->totalRooms; i++) {
    //     if (rooms[i].isReserved()) {
    //         continue;
    //     }
    //     rooms[i].setReservationNumber(a.getReservationNumber());
    //     //cout <<"\n rent day: " << days[daysIndex];
    //     rooms[i].setRentDays(days[daysIndex]);
    //     rooms[i].setReserved(true);
    //     roomDoubleBooked++;
    //     daysIndex++;
    //     if (roomDoubleBooked == doubleRoomAmount) break;
    // }
    // if (roomDoubleBooked < doubleRoomAmount){
    //     cout << "\nNot enough double rooms" << endl;
    //     return false;
    // }
    //this->addCustomer(a);
    //cout <<"\nBooking sucessfully\n";
    //return true;