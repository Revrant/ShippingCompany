/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 09 HeepShipping
Date Last Modified: 04/29/2017
File Summary:
------------------------------------------*/
#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
#include <iostream>

class Package
{
private:
  int urgency;
  std::string m_content;
  std::string m_priority;
  std::string m_destination;

public:
  Package();
  Package(std::string content, std::string priority, std::string destination);
  ~Package();
  std::string getContent();
  std::string getPriority();
  std::string getDestination();
  void setContent(std::string content);
  void setPriority(std::string priority);
  void setDestination(std::string destination);
  bool operator>(const Package& rhs);
};
#endif
