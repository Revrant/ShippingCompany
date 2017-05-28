/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 09 HeepShipping
Date Last Modified: 04/29/2017
File Summary:
------------------------------------------*/
#include "Warehouse.h"
//****************************************************
//
//     CONSTRUCTOR
//
//****************************************************
Warehouse::Warehouse(std::string filename)
{
  m_filename = filename;
  inFile.open(m_filename);

  if(inFile.is_open())
  {
    openfile = true;
  }
  inFile.close();
  run();

}

//****************************************************
//
//     RUN
//
//****************************************************
void Warehouse::run()
{
  if(openfile == true)
  {
  	inFile.open(m_filename);
  	std::string packages = "";
  	std::string priority = "";
  	std::string content = "";
  	std::string destination = "";

  	Shipping = new MinHeap<Package>();

  	while(true)
  	{
  		std::getline(inFile, priority, ',');

      if(inFile.eof())
      {
        break;
      }

  		if(priority == "TRUCK")
  		{
  			std::getline(inFile, packages, '\n');
        std::cout << "A truck has arrived!\n";
        std::cout << "Loading the following " << std::stoi(packages) << " packages\n";

        for(int i = 0; i < std::stoi(packages); i++)
        {
          std::cout << i + 1 << ". Priority: " << Shipping->peekTop().getPriority() << "; Contents: " << Shipping->peekTop().getContent() << "; Destination: " << Shipping->peekTop().getDestination() << std::endl;
          Shipping->remove();
        }
        std::cout << "Truck is leaving!\n";
  		}

  		std::getline(inFile, content, ',');
  		std::getline(inFile, destination, '\n');
  		
      Package temp(content, priority, destination);
      Shipping->add(temp);
  	}
  }
}













//Free Space