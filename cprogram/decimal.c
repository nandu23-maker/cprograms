#include <stdio.h>

int main()
{
       int binary=101101;
           int decimal=0 , base=1, reminder ;
           
           while (binary > 0) 
          {
          reminder=binary%10;
          decimal=decimal+reminder*base;
          base=base *2;
          binary=binary/10;
          }
          printf("Decimal=%d",decimal);
    
    return 0;
}
