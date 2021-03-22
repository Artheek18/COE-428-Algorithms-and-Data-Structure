#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern void addHeap(int);
extern int heapDelete();
extern int heapSize();


int main(int argc, char * argv[])
{
  int value, amount, stack_push, i, popped;
  while (scanf("%d\n", &value) != EOF) {
    fprintf(stderr, "READING INPUT: %d\n", value);
      addHeap(value);
       
      printf("\n");
      amount = heapSize();
      for(i = 0; i < amount; i++){
         stack_push = heapDelete();
          printf("%d\n", stack_push);            
          push(stack_push);
      } 
      
     printf("\n");
    for(i = 0; i < amount; i++){
          popped = pop();
          printf("%d\n", popped);            
          
      } 
    
    
  }
  exit(0);
}
