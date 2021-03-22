#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
  
 int i,b;
 char com[3]; 

 typedef struct state_machine{
  char name;
  struct state_machine* next_0;
  struct state_machine* next_1;	

 }state_machine; 
  
 state_machine state[8];
 state_machine *begin = (&state[1]);	
  
 state[0].name = 'A'; 
 state[0].next_0 = &state[7];
 state[0].next_1 = &state[4];
 
 state[1].name = 'B'; 
 state[1].next_0 = &state[5];
 state[1].next_1 = &state[3];

 state[2].name = 'C'; 
 state[2].next_0 = &state[6];
 state[2].next_1 = &state[0];
 
 state[3].name = 'D'; 
 state[3].next_0 = &state[4];
 state[3].next_1 = &state[1];

 state[4].name = 'E'; 
 state[4].next_0 = &state[7];
 state[4].next_1 = &state[5];
	
 state[5].name = 'F'; 
 state[5].next_0 = &state[2];
 state[5].next_1 = &state[5];

 state[6].name = 'G'; 
 state[6].next_0 = &state[1];
 state[6].next_1 = &state[0];

 state[7].name = 'H'; 
 state[7].next_0 = &state[3];
 state[7].next_1 = &state[6];

state_machine *current = &state[1];
 fprintf( stdout,"start:%c\n",begin->name);
 printf("Insert command; the change command should be typed as c0A, not c 0 A\n");

void printStates(){
 for(i = 0; i < 8; i++){
 fprintf(stdout,"%c %c %c \n", state[i].name, state[i].next_0 -> name, state[i].next_1 -> name); 		
 }

}

void garbageCollecting(){
int count1, count2, count3, count4, count5, count6, count7, count8;
for(i = 0; i < 8; i++){
 if((state[i].next_0->name) == 'A' || (state[i].next_1 -> name) == 'A' ){ 
  count1++;		
 }

 if((state[i].next_0->name) == 'B' || (state[i].next_1 -> name) == 'B' ){ 
  count2++;		
 }

 if((state[i].next_0->name) == 'C' || (state[i].next_1 -> name) == 'C' ){ 
  count3++;		
 }

 if((state[i].next_0->name) == 'D' || (state[i].next_1 -> name) == 'D' ){ 
  count4++;		
 }

 if((state[i].next_0 ->name) == 'E' || (state[i].next_1 -> name) == 'E' ){
  count5++;		
 }

 if((state[i].next_0 ->name) == 'F' || (state[i].next_1 -> name) == 'F' ){ 
  count6++;		
 }

 if((state[i].next_0 ->name) == 'G' || (state[i].next_1 -> name) == 'G' ){
  count7++;		
 }

 if((state[i].next_0->name) == 'H' || (state[i].next_1 -> name) == 'H' ){ 
  count8++;		
 }

}

if(count1 < 1){
fprintf(stdout,"A is unreachable"); 
}
else if(count2 < 1){
fprintf(stdout,"B is unreachable"); 
}
else if(count3 < 1){
fprintf(stdout,"C is unreachable"); 
}
else if(count4 < 1){
fprintf(stdout,"D is unreachable"); 
}
else if(count5 < 1){
fprintf(stdout,"E is unreachable"); 
}
else if(count6 < 1){
fprintf(stdout,"F is unreachable"); 
}
else if(count7 < 1){
fprintf(stdout,"G is unreachable"); 
}
else if(count8 < 1){
fprintf(stdout,"H is unreachable"); 
}
else{
printf("No states are unreachable");
}



}

 while(b!=1){
        //input
        for(i=0;i<3;i++){
            scanf("%c",&com[i]);
            if(com[i]=='\n'){
                break;
            }
        }
        //exit
        if(com[0]=='x'|| com[0]=='X'){
            b=1;
        } 

 if(com[0] == 'p'){
  printStates();
 }

 if(com[0]== 'g'){
 garbageCollecting();

}

 if(com[0] == '0'){
 fprintf(stdout,"%c \n", current -> next_0 -> name); 
 current = (current -> next_0);

 }

 if(com[0] == '1'){
 fprintf(stdout,"%c \n", current -> next_1 -> name); 
 current = (current -> next_1);
 }
    
 if(com[0] == 'c' && com[1] == '0'){
    if(com[2] == 'A'){
     (current->next_0) = &state[0];
	current = &state[0];
  } 
    else if(com[2] == 'B'){
     (current->next_0) = &state[1];
	current = &state[1];
  }
   else if(com[2] == 'C'){
     (current->next_0) = &state[2];
	current = &state[2];
  }
   else if(com[2] == 'D'){
     (current->next_0) = &state[3];
	current = &state[3];
  }
   else if(com[2] == 'E'){
     (current->next_0) = &state[4];
	current = &state[4];
  }
  else if(com[2] == 'F'){
     (current->next_0) = &state[5];
	current = &state[5];
  }
  else if(com[2] == 'G'){
     (current->next_0) = &state[6];
	current = &state[6];
  }
  else if(com[2] == 'H'){
     (current->next_0) = &state[7];
	current = &state[7];
  }


 }
  if(com[0] == 'c' && com[1] == '1'){
    if(com[2] == 'A'){
     (current->next_1) = &state[0];
	current = &state[0];
  }
    else if(com[2] == 'B'){
     (current->next_1) = &state[1];
	current = &state[1];
  }
   else if(com[2] == 'C'){
     (current->next_0) = &state[2];
	current = &state[2];
  }
   else if(com[2] == 'D'){
     (current->next_1) = &state[3];
	current = &state[3];
  }
   else if(com[2] == 'E'){
     (current->next_1) = &state[4];
	current = &state[4];
  }
  else if(com[2] == 'F'){
     (current->next_0) = &state[5];
	current = &state[5];
  }
  else if(com[2] == 'G'){
     (current->next_1) = &state[6];
	current = &state[6];
  }
  else if(com[2] == 'H'){
     (current->next_1) = &state[7];
	current = &state[7];
  }


 }



}


    exit(0);
}

