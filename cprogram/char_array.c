#include <stdio.h>


int main()
{
   char array[5]={'a','b','\0','d','e'};
  // char array[]="abcdefg";
   int i;
  
   for(i=0;array[i]!= '\0'; i++)
   {
      printf("\n%c\n",array[i]);
   }
    
    return 0;
}
