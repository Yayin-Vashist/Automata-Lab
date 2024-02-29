#include<stdio.h>

int main(){

  printf("---------------------------------------automata for ending with 101-----------------------------------------\n\n");

  //char str[3];
  // int i=0;
  // while(!(str[0]=='1' && str[1]=='1' && str[2]=='1')) {
  //   scanf("%c", &str[i]);
  //   i=(i+1)%3;
  // }
  //printf("We have reached the reached the final state and will remain here, no matter which character we read!\n");
  char curr_state='0', ch[2];
  ch[0]='.';
  printf("please start enter the string and enter ':' to end entering the string: ");
  
  while(ch[0]!=':'){
    scanf("%s", ch);
    if(curr_state=='0'){
      if(ch[0]=='0')
        curr_state='0';
      else if(ch[0]=='1')
        curr_state='1';
    }
    else if(curr_state=='1'){
      //     printf("hello\n");
      if(ch[0]=='0')
        curr_state='2';
      else if(ch[0]=='1')
        curr_state='1';
    }
    else if(curr_state=='2'){
      if(ch[0]=='0')
        curr_state='0';
      else if(ch[0]=='1')
          curr_state='3';
    }
    else if(curr_state=='3'){
      if(ch[0]=='0')
        curr_state='2';
      else if(ch[0]=='1')
        curr_state='1';
    }
   printf("ch=%c curr_state=q%c\n",ch[0],curr_state);
  }
  
  if(curr_state=='3')
    printf("We are in final state the string is accepted!\n0");
  else 
    printf("We are in q%c state, the string is not accepted!\n",curr_state);

  return 0;
}
