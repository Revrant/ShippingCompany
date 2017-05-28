/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 09 HeepShipping
Date Last Modified: 04/29/2017
File Summary:
------------------------------------------*/

//****************************************************
//
//     CONSTRUCTOR
//
//****************************************************
template <typename T>
MinHeap<T>::MinHeap()
{
  m_arrSize = 20;
  m_heapSize = 0;
  m_arr = new T[m_arrSize];
}

//****************************************************
//
//     DESTRUCTOR
//
//****************************************************
template <typename T>
MinHeap<T>::~MinHeap()
{
  delete[] m_arr;
}

//****************************************************
//
//     IS EMPTY
//
//****************************************************
template <typename T>
bool MinHeap<T>::isEmpty() const
{
  return(m_heapSize == 0);
}

//****************************************************
//
//     SIZE
//
//****************************************************
template <typename T>
int MinHeap<T>::size() const
{
  return(m_heapSize);
}

//****************************************************
//
//     ADD
//
//****************************************************
template <typename T>
void MinHeap<T>::add(T value)
{
  if(m_arrSize == m_heapSize)
  {
    reSize();
  }
  m_arr[m_heapSize] = value;
  upHeap(m_heapSize);
  m_heapSize++;
}

//****************************************************
//
//     REMOVE
//
//****************************************************
template <typename T>
void MinHeap<T>::remove() throw(std::runtime_error)
{
  if(isEmpty())
  {
    throw(std::runtime_error("Heap is empty!\n"));
  }

  T temp = m_arr[0];
  m_arr[0] = m_arr[m_heapSize - 1];
  m_arr[m_heapSize] = temp;
  m_heapSize--;
  downHeap(0);
}

//****************************************************
//
//     PEEK TOP
//
//****************************************************
template <typename T>
T MinHeap<T>::peekTop() const throw(std::runtime_error)
{
  if(isEmpty())
  {
    throw(std::runtime_error("Heap is empty.\n"));
  }
  return(m_arr[0]);
}

//****************************************************
//
//     RESIZE
//
//****************************************************
template <typename T>
void MinHeap<T>::reSize()
{
  T* temp = new T[m_arrSize * 2];

  for(int i = 0; i < m_arrSize; i++)
  {
    temp[i] = m_arr[i];
  }

  delete[] m_arr;
  m_arr = temp;
  m_arrSize = m_arrSize * 2;
}

//****************************************************
//
//     UPHEAP
//
//****************************************************
template <typename T>
void MinHeap<T>::upHeap(int index)
{
  if(index == 0)
  {
    return;
  }

  int parent = (index - 1) / 2;

  if(m_arr[parent] > m_arr[index])
  {
    T temp = m_arr[parent];
    m_arr[parent] = m_arr[index];
    m_arr[index] = temp;
    upHeap(parent);
  }
}

//****************************************************
//
//     DOWNHEAP
//
//****************************************************
template <typename T>
void MinHeap<T>::downHeap(int index)
{
  int left = (index * 2) + 1;
  int right = (index * 2) + 2;

  if(m_arr[index] > m_arr[left])
  {
    T temp = m_arr[index];
    m_arr[index] = m_arr[left];
    m_arr[left] = temp;
    downHeap(left);
  }
  if(m_arr[index] > m_arr[right])
  {
    T temp = m_arr[index];
    m_arr[index] = m_arr[right];
    m_arr[right] = temp;
    downHeap(right);
  }
}












//Free Space
