#pragma once
class counter
{
private:
	unsigned int count; //count
public:
	counter() : count(0) //constructor
	{ }
	unsigned int get_count() //return count
	{
		return count;
	}
	void operator ++ () //increment (prefix)
	{
		++count;
	}
};