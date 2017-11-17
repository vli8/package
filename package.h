//Victor Li
//Package header file
//August 5th
#ifndef package_h
#define package_h
#include "customer.h"
#include <iostream>
using namespace std;
class Package{

        public:
                Package();//base class constructor default
                Package(Customer&, Customer& , double , double ); //sender/recipient
                double calcCost();//Base calc Cost
                bool setWeight(double);//not negative
                bool setCost(double);//not negative
                double getTcost();//total cost
                void print();

        protected:
                Customer sender, recipient;
                double weight, cost, tcost;
};
#endif
