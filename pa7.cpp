//Patrick Whetsel
//CSCI 2312 Fall 2012
//pa7.cpp
//This program asks for a list of one or more usigned ints to be stored in a linked list.
//The program then outputs each element from this list in two formats: converted to base 3
//and inserting commas in the standard position.  These results are in a two columns with
//a heading for each column.

#include "pa7functions.h"

int main()
{

	pa7functions::greeting();

	list<unsigned> unsigned_list;
	pa7functions::populate_list(unsigned_list);

	std::cout << std::setw(22) << std::setfill(' ') << std::right << "\nOriginal";
	std::cout << std::setw(22) << std::setfill(' ') << std::right << "Commas Added";
	std::cout << std::setw(32) << std::setfill(' ') << std::right << "Base3 Conversion";
	std::cout << std::endl;
	while(!unsigned_list.empty())
	{
		std::cout << std::setw(22) << std::setfill(' ') << std::right << unsigned_list.front();
		std::cout << commas(unsigned_list.front());
		std::cout << tertiary(unsigned_list.front());
		std::cout << std::endl;
		unsigned_list.pop_front();
	}

	pa7functions::exit_program();

}
