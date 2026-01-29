#include <stdio.h>

yvoid capletter(char a[])
{ 
   int i=0;

   while(a[i]!='\0')
   {
     a[i]=a[i]-32;
     i++;
   }
      return;
}
int main()
{ 
     char a[]="nandini";
 
     capletter(a);
     printf("%s", a);
  
  
    
    return 0;
}
