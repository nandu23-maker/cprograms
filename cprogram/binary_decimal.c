#include <stdio.h>
int binarytodecimal(int binary)
{
     int decimal=0,base=1,reminder;

     while(binary>0)
    {
     reminder=binary%10;
     decimal=decimal+reminder*base;
     base=base*2;
     binary=binary/10;
    }
    return decimal;
}
             

int main()
{
    int binary=101101;
    int result=binarytodecimal(binary);
    printf("%d" , result);
    
    return 0;
}
