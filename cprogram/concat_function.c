#include <stdio.h>

void str(char a[],char b[])
{
    int i=0,j=0;
   
            while(a[i]!='\0')
            {
                 i++;
            }

            while(b[j]!='\0')
            {
               a[i]=b[j];
               a++;
               b++;
            }
         a[i]='\0';   
}
int main()
{
   char a[]="Hello";
   char b[]="world";

   str(a,b);

   printf("Result: %s",a);
    
    return 0;
}
