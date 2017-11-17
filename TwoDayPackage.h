//Victor Li
//Header file for two day package
//August 5th

#ifndef TwoDayPackage_h
#define TwoDayPackage_h

#include <iostream>
using namespace std;

#include "package.h"

class TwoDayPackage : public Package{

        public:
                TwoDayPackage(Customer&, Customer&, double, double, double);
                double calcCost();//overwriting the baseclass method
                //note: not overwriting the method from overnight class because it is not inheriting that method
                bool setFee(double);//making sure it is not negative
                void print();


        private:
                double fee;
};
#endif
~                                                                                              
~                                                                                              
~               
