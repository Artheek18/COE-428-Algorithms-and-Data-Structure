#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
extern int pop();
extern void push(int);
extern int isEmpty();


int main(int argc, char * argv[]){
  char string[100];
  int ch, ent, leave, i;
  int counter;
  int arr[26];
  for(i = 0; i < 26; i++){
    arr[i] = 0;
   }
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
      continue;
   

   else if(ch=='<')
    {
        ch = getchar(); //
        if(isalpha(ch)){
                ent = getchar();
                if(ent =='>'){
                          push(ch); 
                     while (string[ch] != '\0') {
   
      if (string[ch] >= 'a' && string[ch] <= 'z') {
         counter = string[ch] - 'a';
         arr[counter]++;
      }

      ch++;
   }
                }
                else
                printf("Incomplete");
                exit(1);
                
        }
       else if(ch =='/'){
            ch = getchar();
            if(isalpha(ch))
            {
                     ent = getchar();
                      if(ent =='>')
                      {
                          int d = isEmpty();
                          leave = pop();
                           if(d == 1){ 
                              fprintf(stderr,"empty stack \n");
                              exit(0);
                           }

                           else if(leave == ch) 
                           {
                                  continue;
                           }
                           else{
                                 fprintf(stderr,"Invalid! the stack is mismatched\n");
                                 exit(1);
                           }

                           
                      }
                      else{ 
                         fprintf(stderr, "The closing identifier was not detected." );
                         exit(1);
                      }
            }
      }
  } 
  else
      exit(0);

}
 int a = isEmpty();    
  if(a == 0){
    printf("Valid");
   for(i = 0; i< 26;i++){
     printf("%c, %d \n", i + 'a', arr[i]);
   }
  }
 else 
     printf("NOT valid");
     exit(0);


}

