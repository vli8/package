//VIctor Li
//Main File
//July 6th
#include "package.h"
#include "TwoDayPackage.h"
#include "overnightpackage.h"
#include <iostream>
using namespace std;
main(){
        const double COST = .5;//Base cost to ship it
        const double TFEE = 3.00;//fee for two day shipping
        const double OFEE = 6.50;//fee for overnight shipping
        double weight;
        string answer;
        //Calling the custom constructor to test the program if it works.
        Customer x("Adrian", ".H", 123, "54th", "Sarasota", "FL", "24210");
        Customer y("Victor", "Li", 605, "42nd", "Miami", "FL", "24456");
        Package a(x,y,2,COST);
        TwoDayPackage b(x,y,2, COST, TFEE);

        //calling print function to print out a/sender and b/recipient infos
        a.print();
        cout << endl;
        b.print();

        //setting up the array size in the pointers so that we can keep track
        OverNightPackage *overnightpackages[100];
        TwoDayPackage *twodaypackages[100];

        //variables that will keep track of the dynamic memory 
        int numOver=0, numTwo=0;
        do{


        cout << "Welcome to the post office! Please enter your custom info: "<<endl;
        Customer client;//creating an object
        client.input();//calling the input method from class Customer


        cout << "Would you like to send a package: ";
        cin >> answer;

        if(answer == "yes"){
                cout << "What is the destination address: ";
                Customer *recipient = new Customer();//allocating memory in dynamic memory
                recipient->input();
                //ask type of package
                cout << "What type of package do you wanna send? (o/t)";
                cin >> answer;
                if(answer == "o"){
                        cout << "Weight: ";
                        cin >> weight;
                        OverNightPackage *p = new OverNightPackage(client,*recipient, weight, COST, OFEE );
                        overnightpackages[numOver] = p;
                        numOver++;//increment it after saving the info in numOver
                        cout << "Cost is: " << p << endl;//display of info
                }
                else if(answer == "t"){
                        cout << "Weight: ";
                        cin >> weight;
                        TwoDayPackage *p = new TwoDayPackage(client,*recipient, weight, COST, TFEE );
                        twodaypackages[numTwo] = p;
                        numTwo++;
                        cout << "Cost is: " << p << endl;


                }


        }
                        cout << "Is there another client behind you? ";
                cin >> answer;
                if (answer == "no")
                        break;//to go out of the loop


        }while(numOver<99 || numTwo <99);


}

