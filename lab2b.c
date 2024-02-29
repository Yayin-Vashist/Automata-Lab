#include<stdio.h>
#include<stdbool.h>

bool notExists(char a, char* nt, int countNt){
  for(int i=0; i<countNt; ++i)
    if(nt[i]==a) return false;
  return true;
}

int main(){
	char str[100], nt[100], t[100];
	int countT=0, countNt=0;

  input:
  scanf("%s", str);
  if(str[1]!='-' && str[2]!='>'){
    printf("Please give the correct input: \n");
    goto input;
  }

	for(int i =0; str[i]!='\0'; ++i)
		if((str[i]>=97 && str[i]<=122)&& notExists(str[i], nt, countNt))
			nt[countNt++]=str[i];
		else if((str[i]>=65 && str[i]<=90) && notExists(str[i], t, countT))
			t[countT++]=str[i];
	printf("terminal characters are %d and are     : %s \n",countT, t);
	printf("non-terminal characters are %d and are : %s \n",countNt,nt);
	return 0;
}
