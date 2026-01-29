#include <stdio.h>
void uppercase(char str[])
{
  int i=0;
   
  while(str[i]!='\0')
  {
       if(str[i]>='A' && str[i]<='Z')
       {
            str[i]=str[i]+32;
       }
       else
       {
           str[i]=str[i];
       } 
    i++;   
  }
}
    
int main()
{
  char st[50];
  
    printf("Enter a string: ");
    scanf("%s", st);
    
    uppercase(st);
   
    printf("%s", st);
    return 0;
}
