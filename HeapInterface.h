/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 09 HeepShipping
Date Last Modified: 04/29/2017
File Summary:
------------------------------------------*/
#ifndef HEAPINTERFACE_H
#define HEAPINTERFACE_H
#include <iostream>
#include <stdexcept>

template <typename T>
class HeapInterface
{
public:
  virtual ~HeapInterface() {};
  virtual bool isEmpty() const = 0;
  virtual int size() const = 0;
  virtual void add(T value) = 0;
  virtual void remove() throw(std::runtime_error) = 0;
  virtual T peekTop() const throw(std::runtime_error) = 0;
};
#endif
