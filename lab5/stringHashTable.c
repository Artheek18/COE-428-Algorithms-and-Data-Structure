
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#define HASH_TABLE_SIZE 1057
typedef struct Entry Entry, *EntryPtr;
struct Entry {
  char * string;
  int count;
};
Entry hash_table[HASH_TABLE_SIZE];

void add(char * tag)
{
   int value, i;
   int sum = 0;
   for(i = 0; i < strlen(tag); i++){
    sum = sum + tag[i];

   }   
    value = sum % HASH_TABLE_SIZE;
     
   if(hash_table[value].count != 0){
          hash_table[value].count++;
          hash_table[value].string = tag;
   } 
  else
     hash_table[value].count = 1;
     hash_table[value].string = tag;


}

int hash(char * tag){
  int r_Value, counting, h_Value;
  int summing = 0;
  int k = strlen(tag);

  for(counting = 0; counting < k; counting++){
     summing = summing + tag[counting];

   }
   h_Value = summing % HASH_TABLE_SIZE;
   
   if(hash_table[h_Value].string == tag){
      r_Value = hash_table[h_Value].count;
  
    }

  return h_Value;
  return r_Value;

}
