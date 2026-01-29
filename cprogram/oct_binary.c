#include <stdio.h>
int octaltobinary(int octal)
{
   int decimal=0,base=1,reminder,binary=0;

   while(octal>0)
   {
    reminder=octal%10;
    decimal=decimal+reminder*base;
    base=base*8;
    octal=octal/10;
   }
  
   base=1;
   
   while(decimal>0)
   {
      binary=binary+(decimal%2)*base;
      decimal=decimal/2;
      base=base*10;
   }
     return binary;
}
   
int main()
{
    int octal=46;
    int result= octaltobinary(octal);
    printf("%d", result); 
     return 0;
                                        
}
