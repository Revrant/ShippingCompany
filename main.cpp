/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 09 HeepShipping
Date Last Modified: 04/29/2017
File Summary:
------------------------------------------*/
#include <iostream>
#include "Warehouse.h"

int main(int argc, char* argv[])
{
	if(argc != 2)
	{
		std::cout << "Incorrect parameters!\n";
	}
	else if(argv[1])
	{
		Warehouse ship(argv[1]);
	}

	return(0);
}
