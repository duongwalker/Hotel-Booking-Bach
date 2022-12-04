#include "self_hotel.hh"

int main() {


   Hotel *hotel = new Hotel();
   Customer *a = new Customer(true);
   int rent_days[] = {1,2,3,4,5,6,7,8};
   hotel->addCustomer(a);
   hotel->booking("", 0, rent_days, 0, a);
   hotel->display(a);

}
