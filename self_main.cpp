#include "self_hotel.hh"

int main()
{

   Hotel *hotel = new Hotel();
   Customer *a = new Customer();
   int rent_days[] = {1, 2, 3};
   hotel->addCustomer(a);
   hotel->booking(rent_days, a);
   hotel->display(a);
}
