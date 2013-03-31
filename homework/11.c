#include <stdio.h>
int mygetline(char s[],int limit);
void copy(char to[],char from[]);
void copy(char to[],char from[])
{
  int i;
  i=0;
  while((to[i]=from[i])!='\0')
  ++i;
}
int mygetline(char s[],int limit)
{
  int c,i,j;
  j=0;
  for(i=0;(c=getchar())!=EOF && c !='\n';i++)
    if(i<limit-2)
      {
      s[j]=c;
      ++j;
      }
  if(c=='\n'){
    s[j]=c;
    ++i;
    ++j;
  }
  s[j]='\0';
  return i;
}
    
int main()
{
  char str[1000];
  int len;
  int max;
  char longest[1000];
  max=0;
  while ((len=mygetline(str,1000))>0)
    {
      if(len>max)
	{
      max=len;
      copy(longest,str);
	}
    }
  if(max>0)
    printf("%s\n",longest);
  return 0;
}
