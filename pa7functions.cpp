//Patrick Whetsel
//CSCI 2312 Fall 2012
//pa7functions.cpp
//global function definitions for pa7

#include "pa7functions.h"

void pa7functions::greeting()
{
	std::cout << "Welcome, This program will ask you for a series\n";
	std::cout << "of one or more positive numbers.  The program\n";
	std::cout << "will then add commas where appropriate to each\n";
	std::cout << "number and then convert the number into its base\n";
	std::cout << "3 form.  These two converted numbers will be\n";
	std::cout << "displayed in two columns.  Please press any key\n";
	std::cout << "followed by enter to continue.  ";
	std::string in;
	getline (std::cin, in);
	std::cin.clear();
}
void pa7functions::populate_list(list<unsigned>& holder)
{
	std::string line;
	bool exit = false;
	while (exit != true)
	{
		std::cout << "\nPlease enter a positive integer to be converted('finished' when done): ";
		getline (std::cin, line);
		if (line == "finished")
		{
			exit = true;
		}
		else
		{
			std::istringstream input(line);
			unsigned temp;
			input >> temp;
			holder.push_front(temp);
			line.clear();
		}
	}
}
void pa7functions::output_list(list<unsigned>& unsigned_list)
{
	std::cout << std::setw(22) << std::setfill(' ') << std::right << "Original";
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
}
int pa7functions::exit_program()
{
	std::cout << "\nPress any key followed by enter to exit program. ";
	int exit;
	std::cin >> exit;
	return EXIT_SUCCESS;
}