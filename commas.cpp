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
	int temp;
	temp = input/1000;
	if(temp < 1)
	{
		out << input;
	}
	if(temp > 0 && temp < 1000)
	{
		int temp2 = temp;
		int a = input%1000;
		out << temp2 << "," << a;
	}
	temp = input/1000000;
	if(temp > 0 && temp < 1000)
	{
		int temp3 = temp;
		temp = input;
		int a = temp%1000;
		temp /= 1000;
		int b = temp%1000;
		out << temp3 << "," << b << "," << a;
	}
	temp = input/1000000000;
	if(temp > 0)
	{
		int temp2 = temp;
		temp = input;
		int a = temp%1000;
		temp /= 1000;
		int b = temp%1000;
		temp /= 1000;
		int c = temp%1000;
		out << temp2 << "," << c << "," << b << "," << a;
	}

	return out;
}
std::ostream& operator << (std::ostream& out, const commas& c)
{
	return c.add_commas(out);
}
