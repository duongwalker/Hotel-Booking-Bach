#include "self_customer.hh"


Customer::Customer(){
    this->reservation_num = 0;
}

Customer::Customer(bool create_ReservedNumber){
    int reservedNumber = randomReservedNum();
    this->setReservationNumber(reservedNumber);
}

void Customer::setName(string name) {
    this->name = name;

};

void Customer::setRentedRooms(int _rentedRooms[]) {
    int i = 0;
    while(this->rented_Rooms != nullptr) {
        //cout << _
    }
};

void Customer::setRentedDays(int rentedDays) {
    this->rented_Days = rentedDays;
    cout << "Days rented: " << rented_Days;
};

void Customer::setReservationNumber(int reservedNumber) {
    this->reservation_num = reservedNumber;
};

int Customer::getReservationNumber() {
    return this->reservation_num;
}

void Customer::setCustomerInfo (string name, int rented_rooms[], int rented_days) {
    
    this->name = name;
    this->rented_Days = rented_days;

    for (int i = 0; i < 80; i++) {
        this->rented_Rooms[i] = rented_rooms[i];
    }
};

void Customer::getCustomerInfo () {
    cout << "Reservation number: "<< this->reservation_num << endl;
    cout << "Name: " << this->name << endl;
    cout << "You booked: " << this->getTotalRoom() << " rooms" << endl; 
    cout << "Rented rooms: " << endl;
    for(int i = 0; i < 80 ; i++){
        if (this->rented_Rooms[i] != 0) {
           // cout << i << " ";
        };
    }
    cout << endl;
    //cout << "Number of rented days: " << this->rented_Days << endl; 

}


void Customer::setTotalRoom(int total_room) {
    this->totalRoom = total_room;
}



int Customer::getTotalRoom() {
    return this->totalRoom;
}

string Customer::getName() {
    cout << this->name << endl << endl<< endl<< endl<< endl;
    return this->name;
}



