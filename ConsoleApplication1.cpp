#include <string>
#include <iostream>
using namespace std;
#include "bbb.h"
#include "calculator.h"
#include "Distance.h"
#include "counter.h"
#include "car.h"
int main()
{

    bbb c1("toyota", 2010, "yellow");
    //c1.setMaker("Honda");
    //c1.setModel(2018);
    c1.getCount();
    bbb c2;
    cout << c2.getMaker() << "\n";
    c2.getCount();

    cout << "This car made by " << c1.getMaker() << "\n";
    cout << "This car model by " << c1.getModel() << "\n";
    calculator m1;
    cout << m1.add(3, 7) << "\n";
    cout << m1.add(2, 3, 7) << "\n";
    //cout << m1.add(2.2) << "\n";
    cout << m1.add("yousef", "eslam") << "\n";
    

    

    //Distance
    Distance d1;
    Distance d2(5, 2.2);
    Distance d3(d2);
    d3.print();
    d3.setDistance(7, 3.3);
    Distance d4 = d3;
    d4.print();


    //passing object to methods
    Distance obj1(5, 3.5);
    Distance obj2(7, 4.25);
    Distance dis3 = obj1.addDistance(obj2);
    dis3.print();
    cout << "\n";

    //inheritence
    car s1;
    s1.getCount();
   
    s1.getMaker();
    s1.getModel();
    car s2;
    return 0;
};
