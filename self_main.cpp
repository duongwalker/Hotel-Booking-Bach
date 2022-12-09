#include "self_hotel.hh"



int main() {
   Hotel *hotel = new Hotel();
   Customer *a = new Customer();
   int rent_days[] = {1, 2, 3};
   hotel->addCustomer(a);
   hotel->display(a);
   int choice;
   
   do {
      cout<<"\n\t\t\t\t*************************";
      cout<<"\n\t\t\t\t SIMPLE HOTEL MANAGEMENT ";
      cout<<"\n\t\t\t\t      * MAIN MENU *";
      cout<<"\n\t\t\t\t*************************";
      cout<<"\n\n\n\t\t\t1.Book A Room";
      cout<<"\n\t\t\t2.Customer Records";
      cout<<"\n\t\t\t3.Rooms Allotted";
      cout<<"\n\t\t\t4.Edit Record";
      cout<<"\n\t\t\t5.Exit";
      cout<<"\n\n\t\t\tEnter Your Choice: ";
      cin >> choice;
      switch(choice) {
         case 1: 
            hotel->booking(rent_days, a);
            hotel->display(a);
            break;
         case 5:
            cout << "Thank you for visit our hotel";
            return 0;
         default:
            cout << "Invalid command. Please try again!";
            break;
      }
   }
   while (choice != 5);
};




