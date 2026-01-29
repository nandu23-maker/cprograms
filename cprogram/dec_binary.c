#include <stdio.h>
int decimaltobinary(int n)
     {
       int binary=0,base=1;
         
         while(n>0)
         {
            binary=binary+(n%2)*base;
            n=n/2;
            base=base*10;
         }
            return binary;
      }
int main()
{
      int n=44;
      int result=decimaltobinary(n);
      printf("%d",result );
               
          return 0;
                                        
}

