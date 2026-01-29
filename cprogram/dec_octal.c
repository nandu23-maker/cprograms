#include <stdio.h>
int dectooctal(int n)
{
   int octal=0 ,base=1;

     while(n>0)
    {
     octal=octal+(n%8)*base;
     n=n/8;
     base=base*10;
    }
       return octal;
}
int main()
{
       int n=44;
       int result = dectooctal(n);
       printf("%d" , result);
               
       return 0;
                                        
}

