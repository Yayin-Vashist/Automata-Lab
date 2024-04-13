#include<stdio.h>
#include<stdbool.h>

int main(){
  int n;
  printf("Please input the length of string: ");
  scanf("%d", &n);

  char str[n];
  printf("Please enter the string: ");
  scanf("%s", str);
  if(n%3!=0)
    printf("No");
  else{
    int a = 0, b = -1, c = -1, move = 1, curr = 0;

    bool done = false, once = false, yes=true;
    while(!done){
      if(!once && str[a] != str[curr])
        b = curr, once = true;
      if(b != -1 && str[b]!= str[curr])
        b = curr-1, c=curr, done = true;
      curr += move;
    }

    for(int i=0; i<n/3; ++i){
      if(!(str[a+i]== str[a] && str[b-i]==str[b] && str[c+i]==str[c])){
        yes = false;
        break;
      }
    }
    if(yes)
      printf("Yes");
    else
      printf("No");
  }
  return 0;
}
