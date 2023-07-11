#include "bbb.h"
#include<iostream>
using namespace std;
int bbb::count = 0;
void bbb::setMaker(string m) {
	maker = m;
}
string bbb::getMaker() {
	cout << "maker is " << maker << "\n";
	return maker;

}

void bbb::setModel(int m)
{
	model = m;
}
int bbb::getModel() {
	cout <<"model is " << model<<"\n";
	return model;
}
int bbb::getCount()
{
	cout<<"count is "<<count<<"\n";
	return count;
}
//we use more than constructor => overloading


bbb::bbb():maker("BMW"), model(2019), color("White") {
	count++;
	
		cout << "Base defult constructor \n";//calling base  class constructors
	
}
bbb::bbb(string m, int mo, string c):maker(m),model(mo),color(c) {
	//maker = "Honda";
	//model = 2019;
	//color = "white";
	count++;
	
		cout << "Base defult constructor \n";//calling base  class constructors
	
}

bbb::~bbb() {
	cout <<"\n" << "Goot bye" << "\n";
	--count;

}
//bbb::bbb(const string& maker, int model, const string& color)
	//: maker(maker), model(model), color(color)
//{
//}

