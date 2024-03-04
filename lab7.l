%{
#include<stdio.h>
%}

%%
(a|A)[a-zA-Z]*(a|A) { printf("The string is Accepted!!!"); }
(a|A) { printf("The string is Accepted!!!"); }
.* { printf("The string is not Accepted!!!"); }           ;
%%

int main() {
  printf("************************ Start & end with a/A *************************\n\n");
  printf("Please enter the string: ");
  yylex();
  return 0;
}
int yywrap(){
  return 1;
}
