//Victor Li
//Header file for two day package
//August 5th

#ifndef overnightpackage_h
#define overnightpackage_h

#include <iostream>
using namespace std;

#include "package.h"

class OverNightPackage : public Package{

        public:
                OverNightPackage(Customer&, Customer&, double, double, double);//custom contructor
                double calcCost();//overwriting the member from base class
                bool setFee(double);//make sure that the fee isn't negative
                void print();


        private:
                double fee;
};
#endif


~                        
