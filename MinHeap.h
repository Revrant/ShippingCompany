/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 09 HeepShipping
Date Last Modified: 04/29/2017
File Summary:
------------------------------------------*/
#ifndef MINHEAP_H
#define MINHEAP_H
#include "Package.h"
#include "HeapInterface.h"

template <typename T>
class MinHeap : public HeapInterface<T>
{
private:
  T* m_arr;
  int m_arrSize;
  int m_heapSize;
  void upHeap(int index);
  void downHeap(int index);

public:
  MinHeap();
  ~MinHeap();
  bool isEmpty() const;
  int size() const;
  void add(T value);
  void remove() throw(std::runtime_error);
  T peekTop() const throw(std::runtime_error);
  void reSize();
};
#include "MinHeap.hpp"
#endif
