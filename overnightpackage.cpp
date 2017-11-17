//Victor Li
//August 5th
//source code for two day package

#include "overnightpackage.h"


OverNightPackage::OverNightPackage(Customer &x, Customer &y, double w, double c, double f)
: Package(x,y,w,c){//caling the constructor from basecalss to not copy it
        fee = f;
}

double OverNightPackage::calcCost(){

        return(Package::calcCost()  + weight* fee);//overwtiting the basclass method with the extra fee
}

bool OverNightPackage::setFee(double start){
        bool status = true;
        if (start < 0){
                fee != start;
                status = false;
        }
        return(status);
}


void OverNightPackage::print(){
        Package::print();
        cout << "Total Coast + fee for overnight package: " << calcCost()  << endl;
}

~                                                                                              
~                                                                                              
~                                      
