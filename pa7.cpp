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

	pa7functions::output_list(unsigned_list);

	pa7functions::exit_program();

}
