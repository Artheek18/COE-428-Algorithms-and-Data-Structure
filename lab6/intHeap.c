/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */


/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */


#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>


 int size = 0;
 int heap[1000]; 

int heapDelete()
{
  int i,temp; 
  temp = heap[0];
  return temp;
  for(i = 1; i < size; i++){
    heap[i-1] = heap[i];
   }

  size--;


  return 0;  //A dummy return statement
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add)
{
  int i, j;
  heap[size] = thing2add;
  
  i = size;
  
 while(i > 0 && heap[(i-1)/2] < heap[i]){
     j = heap[i];
     heap[i] = heap[(i-1)/2];
     heap[(i-1)/2] = j;
     i = (i-1)/2;

  }  

   size++;
  
}

/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{
  return size;  
}


