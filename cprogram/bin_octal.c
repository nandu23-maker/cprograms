#include <stdio.h>
int binarytooctal(int binary)
{
   int decimal=0, octal=0,base=1,reminder;

   while(binary>0)
  {
  reminder=binary%10;
  decimal=decimal+reminder*base;
  base=base*2;
  binary=binary/10;
  }
    

  base=1;
   while(decimal>0)
  {
  reminder=decimal%8;
  octal=octal+reminder*base;
  base=base*10;
  decimal=decimal/8;
  }
    return octal;
}
int main()
{
    int binary=10110;
    int result=binarytooctal(binary);
    printf("%d",result);
    return 0;
                                        
}

