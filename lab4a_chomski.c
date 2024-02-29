#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(){
  bool type0=true, type1=true, type2=true, type3=true;

  int num_of_prod_rules;
  printf("Please enter the number of production rules: ");
  scanf("%d", &num_of_prod_rules);
  char rules[num_of_prod_rules][100];
  for(int i=0; i<num_of_prod_rules; ++i)
    scanf("%s", rules[i]);
  for(int i = 0; i < num_of_prod_rules; ++i){
    char left[100]={}, right[100]={};
    bool laft=true;
    int iter_l=0, iter_r=0, count_nt=0;
    for(int j = 0; rules[i][j] != '\0'; ++j){
      if(rules[i][j] == '-' && rules[i][j+1] == '>')
        laft=false, j+=2;
      if(laft)
        left[iter_l++] = rules[i][j];
      else{
        right[iter_r++] = rules[i][j];
        if(rules[i][j]>='A' && rules[i][j]<='Z')
          ++count_nt;
      }
    }
    if(strlen(left)>strlen(right)){
      type1=false;
      continue;
    }
    if(strlen(left)>1){
      type2=false;
      continue;
    }
    if(count_nt>1){
      type3=false;
      continue;
    }
    if(count_nt==1 && !((right[0]>='A' && right[0]<='Z') || (right[iter_r-1]>='A' && right[iter_r-1]<='Z'))){
      type3=false;
      continue;
    }
  }
  if(type1==false)
    printf("type0!");
  else if(type2==false)
    printf("type1!");
  else if(type3==false)
    printf("type2!");
  else
    printf("type3!");
}
