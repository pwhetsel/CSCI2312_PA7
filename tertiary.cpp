//Patrick Whetsel
//CSCI 2312 Fall 2012
//tertiary.cpp
//tertiary class definitions for manipulator that converts a base 10 unsigned into a base 3 unsigned

#include "tertiary.h"

tertiary::tertiary(unsigned in):input(in)
{
}
std::ostream& tertiary::to_tertiary(std::ostream& out) const
{
	unsigned temp,one,two,three,four,five,six,seven,eight,nine,ten;
	unsigned eleven, twelve, thirteen, fourteen, fifteen, sixteen;
	unsigned seventeen, eighteen, nineteen, twenty, twentyone;
	temp = input;
	one = temp%3;
	temp /= 3;
	two = temp%3;
	temp /= 3;
	three = temp%3;
	temp /= 3;
	four = temp%3;
	temp /= 3;
	five = temp%3;
	temp /= 3;
	six = temp%3;
	temp /= 3;
	seven = temp%3;
	temp /= 3;
	eight = temp%3;
	temp /= 3;
	nine = temp%3;
	temp /= 3;
	ten = temp%3;
	temp /= 3;
	eleven = temp%3;
	temp /= 3;
	twelve = temp%3;
	temp /= 3;
	thirteen = temp%3;
	temp /= 3;
	fourteen = temp%3;
	temp /= 3;
	fifteen = temp%3;
	temp /= 3;
	sixteen = temp%3;
	temp /= 3;
	seventeen = temp%3;
	temp /= 3;
	eighteen = temp%3;
	temp /= 3;
	nineteen = temp%3;
	temp /= 3;
	twenty = temp%3;
	temp /= 3;
	twentyone = temp%3;
	
	out <<twentyone<<twenty<<nineteen<<eighteen<<seventeen<<sixteen;
	out <<fifteen<<fourteen<<thirteen<<twelve<<eleven;
	out <<ten<<nine<<eight<<seven<<six<<five<<four<<three<<two<<one;

	return out;
}
std::ostream& operator << (std::ostream& out, const tertiary& t)
{
	return t.to_tertiary(out);
}
