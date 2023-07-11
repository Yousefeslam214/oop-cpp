#include "Distance.h"
#include <iostream>
using namespace std;


Distance::Distance():feet(0),inches(0.0)
{
}

Distance::Distance(int f, float i):feet(f),inches(i){
 
}

void Distance::setDistance(int f, float i)
{
	feet = f;
	inches = i;
}

void Distance::print()
{
	cout << "feet = " << feet << "\t " << "inches = " << inches<<"\n";
}

Distance Distance::addDistance(Distance d2)
{
	Distance res;
	res.feet = feet + d2.feet;
	res.inches = inches + d2.inches;
	return res;
}

Distance::~Distance()
{
}