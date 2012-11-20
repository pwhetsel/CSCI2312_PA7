//Patrick Whetsel
//CSCI 2312 Fall 2012
//commas.cpp
//commas class definitions for manipulator that inserts standard commas into unsigned

#include "commas.h"

commas::commas(unsigned in):input(in)
{
}
std::ostream& commas::add_commas(std::ostream& out) const
{
	unsigned temp;
	temp = input/1000;
	if(temp < 1)
	{
		out << std::setw(22) << std::setfill(' ') << std::right << input;
	}
	if(temp > 0 && temp < 1000)
	{
		unsigned temp2 = temp;
		unsigned a = input%1000;
		out << std::setw(18) << std::setfill(' ') << std::right << temp2 << ',' << a;
	}
	temp = input/1000000;
	if(temp > 0 && temp < 1000)
	{
		unsigned temp3 = temp;
		temp = input;
		unsigned a = temp%1000;
		temp /= 1000;
		unsigned b = temp%1000;
		out << std::setw(14) << std::setfill(' ') << std::right << temp3 << ',' << b << ',' << a;
	}
	temp = input/1000000000;
	if(temp > 0)
	{
		unsigned temp2 = temp;
		temp = input;
		unsigned a = temp%1000;
		temp /= 1000;
		unsigned b = temp%1000;
		temp /= 1000;
		unsigned c = temp%1000;
		out << std::setw(10) << std::setfill(' ') << std::right << temp2 << ',' << c << ',' << b << ',' << a;
	}

	return out;
}
std::ostream& operator << (std::ostream& out, const commas& c)
{
	return c.add_commas(out);
}
