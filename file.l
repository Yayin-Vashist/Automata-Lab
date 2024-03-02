%{
#include<stdio.h>
int num=0, c=0;
%}

%%
[aeiouAEIOU] { num++; }   // Count vowels
[a-zA-Z]     { c++; }      // Count all letters (both lowercase and uppercase)
.            ;             // Ignore other characters
%%

int main() {
  printf("Please enter the string: ");
  yylex();
  printf("No. of vowels: %d\n", num);
  printf("No. of letters: %d\n", c);
  return 0;
}

