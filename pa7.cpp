//Patrick Whetsel
//CSCI 2312 Fall 2012
//pa7.cpp
//This program asks for a list of one or more usigned ints to be stored in a linked list.
//The program then outputs each element from this list in two formats: converted to base 3
//and inserting commas in the standard position.  These results are in a two columns with
//a heading for each column.

#include "pa7functions.h"
#include <Windows.h>

int main()
{

	pa7functions::greeting();

	list<unsigned> unsigned_list;
	pa7functions::populate_list(unsigned_list);

	std::cout << std::setw(22) << std::setfill(' ') << std::right << "Original";
	std::cout << std::setw(22) << std::setfill(' ') << std::right << "Commas Added";
	std::cout << std::setw(22) << std::setfill(' ') << std::right << "Base3 Conversion";
	std::cout << std::endl;
	while(!unsigned_list.empty())
	{
		//Sleep (1000);
		std::cout << std::setw(22) << std::setfill(' ') << std::right << unsigned_list.front();
		//Sleep (1000);
		std::cout << std::setw(22) << std::setfill(' ') << std::right << commas(unsigned_list.front());
		//Sleep (1000);
		std::cout << std::setw(22) << std::setfill(' ') << std::right << tertiary(unsigned_list.front());
		//Sleep (1000);
		std::cout << std::setw(22) << std::setfill(' ') << std::endl;
		//Sleep (1000);
		unsigned_list.pop_front();
	}

	pa7functions::exit_program();

}
