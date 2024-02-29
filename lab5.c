#include<stdio.h>

char even1_even0(char* input){
  char curr_state='0';
  for(int i=0; input[i]!='\0'; ++i){
    printf("curr_state: %c, char: %c\n", curr_state,input[i]);
    if(curr_state=='0'){
      if(input[i]=='0')
        curr_state='2';
      else if(input[i]=='1')
        curr_state='1';
    }
    else if(curr_state=='1'){
      if(input[i]=='0')
        curr_state='3';
      else if(input[i]=='1')
        curr_state='0';
    }
    else if(curr_state=='2'){
      if(input[i]=='0')
        curr_state='0';
      else if(input[i]=='1')
        curr_state='3';
    }
    else if(curr_state=='3'){
      if(input[i]=='0')
        curr_state='1';
      else if(input[i]=='1')
        curr_state='2';
    }
  }
  return curr_state;
}

int main(){
  printf("****************************************even 0 AND even 1*******************************************************\n\n");
  printf("Please enter the length of the binary string: ");
  int length;
  scanf("%d", &length);
  char bin_str[length];
  printf("Please enter the binary string: ");
  scanf("%s", bin_str);
  char output_state=even1_even0(bin_str);
  printf("%c\n\n", output_state);
  if(output_state=='0')
    printf("You are in FINAL STATE, the string is ACCEPTED!!!\n");
  else 
    printf("You are NOT in FINAL STATE, the string is NOT ACCEPTED!!!\n");
  return 0;
}
