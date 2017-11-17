//Victor Li
//Package source code
//August 5th

#include "package.h"

Package::Package(){
        weight = 0.0;
        cost = 0.0;
        tcost = 0.0;
}

Package::Package(Customer &asender, Customer &arecipient, double aweight, double acost){
        sender = asender;
        recipient = arecipient;
        weight = aweight;
        cost = acost;
}

double Package::calcCost(){
        double totcost;
        totcost = weight * cost;
        return(totcost);
}
bool Package::setWeight(double w){
        bool status = true;
        if(w < 0.00){
                weight != w;
                status = false;
        }
        return(status);
}



bool Package::setCost(double c){
       bool status = true;
        if(c < 0.00){
                cost != c;
                status = false;
        }
        return(false);
}

void Package::print(){
        sender.print();
        recipient.print();
        cout << "Cost without fee is: " << calcCost()  << endl;
}
