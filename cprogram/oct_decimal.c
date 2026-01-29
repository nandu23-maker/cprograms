#include <stdio.h>
iint octaltodecimal(int octal)
{
    int decimal=0,base=1,reminder;
   
    while(octal>0)
   {
    reminder=octal%10;
    decimal=decimal+reminder*base;
    base=base*8;
    octal=octal/10;
   }
        return decimal;
} 
int main()
{
    int octal=333;
    int result=octaltodecimal(octal);
    printf("%d",result);

         return 0;
                                        
}
