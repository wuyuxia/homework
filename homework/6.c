#include<stdio.h>
int main()
{
  char str[1024];
  char *ptr;
  ptr=NULL;
  int num;
  while(fgets(str,1024,stdin)!=NULL){
    num=0;
    for(ptr=str;*ptr!='\0';ptr++)
      num+=1;
    printf("%d\n",num);
}
   
  return 0;
}
