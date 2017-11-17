// Victor Li
// Package cpp file
// August 5th

#include "customer.h"

Customer::Customer(){
}

Customer::Customer(string fname, string lname, int num, string caddress, string ccity, string cstate, string czip){

        firstName = fname;
        lastName = lname;
        number = num;
        address = caddress;
        city = ccity;
        state = cstate;
        zip = czip;
}

Customer::Customer(Customer &a){
        *this = a;
}


void Customer::print(){
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " <<lastName << endl;
        cout << "Address: " << address<< endl;
        cout << "State: " << state<< endl;
        cout << "City: " << city<< endl;
        cout << "zipcode: " <<zip<< endl;
}
void Customer::input(){
                cout << "What is your first name?";
        cin >> firstName;
        cout << "Last name: ";
        cin >> lastName;
        cout << "Street number: ";
        cin >> number ;
        cout << "Address: ";
        cin >> address;
        cout << "City: ";
        cin >> city;
        cout << "state: ";
        cin >> state;
        cout << "zipcode: ";
cin >> zip;
}

