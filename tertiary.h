//Patrick Whetsel
//CSCI 2312 Fall 2012
//tertiary.h
//function prototypes for tertiary class

#include <iomanip>

#ifndef _tertiary_h
#define _tertiary_h

class tertiary
{
public:
	tertiary(unsigned);
	std::ostream& to_tertiary(std::ostream&) const;
private:
	unsigned input;
};

std::ostream& operator << (std::ostream&, const tertiary&);

#endif