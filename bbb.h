#pragma once
#include <string>
#include <iostream>
using namespace std;
class bbb {
private:
	string maker;
	int model;
	string color;
	static int count ;
public:
	//prototype
	void setMaker(string m);
	string getMaker();
	void setModel(int m);
	int getModel();
	int getCount();


	bbb() ;




	bbb(string m ,int mo , string c);
	~bbb();
	//bbb(const string& maker, int model, const string& color)
		//: maker(maker), model(model), color(color);

};

