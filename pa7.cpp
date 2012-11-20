//Patrick Whetsel
//CSCI 2312 Fall 2012
//pa7.cpp
//This program asks for a list of one or more usigned ints to be stored in a linked list.
//The program then outputs each element from this list in two formats: converted to base 3
//and inserting commas in the standard position.  These results are in a two columns with
//a heading for each column.

#include "commas.h"
#include "list.h"
#include "node.h"
#include "pa7functions.h"
#include "tertiary.h"

int main()
{
	////this is for testing
	//std::cout << "Enter a number to convert: ";
	//unsigned in;
	//std::cin >> in;
	//std::cout << "\n" << commas(in) << "  " << tertiary(in) << "\n";
	////this is for testing

	while (!std::cin.eof())
	{
		std::cout << "\nPlease enter an integer to be stored(eof to finish): ";
		int in;
		std::cin >> in;
	}
}
