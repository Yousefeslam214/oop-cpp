#pragma once
#include "bbb.h"
#include <iostream>
using namespace std;
class car : public bbb
{

public:

	car();
	
	bool operator==(const car& other) const;
};

