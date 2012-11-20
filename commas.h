//Patrick Whetsel
//CSCI 2312 Fall 2012
//commas.h
//function prototypes for commas class

#include <iomanip>

#ifndef _commas_h
#define _commas_h

class commas
{
public:
	commas(unsigned);
	std::ostream& add_commas(std::ostream&) const;
private:
	unsigned input;
};

std::ostream& operator << (std::ostream&, const commas&);

#endif