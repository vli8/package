//Victor Li
//August 5th
//source code for two day package

#include "TwoDayPackage.h"


TwoDayPackage::TwoDayPackage(Customer &x, Customer &y, double w, double c, double f)
: Package(x,y,w,c){//calling the constructor that it inherited plus the one data member added
        fee = f;
}

double TwoDayPackage::calcCost(){

        return(Package::calcCost()  + fee);
}

bool TwoDayPackage::setFee(double start){
        bool status = true;
        if (start < 0){
                fee != start;
                status = false;
        }
        return(status);
}


void TwoDayPackage::print(){
        Package::print();
        cout << "Total Coast + fee for two day package: " << calcCost()  << endl;
}

