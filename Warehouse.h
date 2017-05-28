/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 09 HeepShipping
Date Last Modified: 04/29/2017
File Summary:
------------------------------------------*/
#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include <iostream>
#include <fstream>
#include "MinHeap.h"

class Warehouse
{
private:
  bool openfile = false;
  std::string m_filename;
  std::ifstream inFile;
  MinHeap<Package>* Shipping;

public:
  Warehouse(std::string filename);
  void run();
};
#endif
