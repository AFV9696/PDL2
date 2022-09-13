// Fig . 3.8 : Account.h
// Account class with name and balance data members , and a
// constructor and deposit function that each perform validation .
#include <string>
#include <iostream>

using namespace std;

   class Account {
      public :
         Account ( std::string accountName , int initialBalance)
            : name{accountName} {
               if(initialBalance > 0 ) {
                  balance = initialBalance;
               }
            }
         void deposit ( int depositAmount ) {
            if( depositAmount > 0 ) {
               balance = balance + depositAmount;
            }
         }
         int withdraw(int wdrawAmount) {
            if (wdrawAmount <= balance){
               balance = balance - wdrawAmount;

            return wdrawAmount;

            } cout << "Withdrawal amount exceeded account balance." << endl;
               return 0;
               
         }
         int getBalance () const {
            return balance ;
         }
         void setName (std::string accountName) {
            name = accountName ;
         }

         std :: string getName() const {
            return name;
         }
      private:
         std :: string name ;
         int balance {0} ;
   };
