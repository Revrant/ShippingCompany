/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 09 HeepShipping
Date Last Modified: 04/29/2017
File Summary:
------------------------------------------*/
#include "Package.h"
Package::Package()
{

}

Package::Package(std::string content, std::string priority, std::string destination)
{
  setContent(content);
  setPriority(priority);
  setDestination(destination);
}

Package::~Package()
{

}

std::string Package::getContent()
{
  return(m_content);
}

std::string Package::getPriority()
{
  return(m_priority);
}

std::string Package::getDestination()
{
  return(m_destination);
}

void Package::setContent(std::string content)
{
  m_content = content;
}

void Package::setPriority(std::string priority)
{
  m_priority = priority;
}

void Package::setDestination(std::string destination)
{
  m_destination = destination;
}

bool Package::operator>(const Package& rhs)
{
	if(m_priority == "overnight")
	{
		urgency = 1;
	}
	else if(m_priority == "2-Day")
	{
		urgency = 2;
	}
	else if(m_priority == "ground")
	{
		urgency = 3;
	}
	else if(m_priority == "whenever")
	{
		urgency = 4;
	}

	return(this->urgency > rhs.urgency);
}
