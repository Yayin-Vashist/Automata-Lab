#include<stdio.h>
#include<stdlib.h>

int main(){

   char str[1000];
   FILE* ptr;
   
   ptr = fopen("hello.txt", "r");
   
   if (ptr == NULL)  
   {
    printf("Error While opening file");
     
    exit(1);
   }
   
  int c=0, w=0, s=0, n=0;
  while((str[0] = fgetc(ptr)) != EOF )
  {
   
    for(int i=0; str[i]!='\0'; ++i)
    {
      if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        ++c;
      if(((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) && str[i+1]==' ')
        ++w;
      else if(str[i]==' ')
        ++s;
      else if(str[i]=='\n')
        ++n;
    }
  }
  fclose(ptr);
  printf("characters = %d, words = %d, spaces = %d, new lines = %d",c,w,s,n);
   
  return 0;
}
