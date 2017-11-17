#ifndef customer_h
#define customer_h



#include <iostream>
using namespace std;

class Customer{

        public:
        Customer();
        Customer(string , string , int, string, string , string , string );
        Customer(Customer&);
        void print();
        void input();

        private:
        string firstName, lastName, address, city, state, zip;
        int number;
};
#endif
~                                                                                              
~                                                                                              
~                                                                                              
~              
