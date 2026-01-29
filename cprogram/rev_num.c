#include <stdio.h>
int main()
{
           int n=12345;
           int rev=0;
           
          rev=(n%10)*10000+(n/10%10)*1000+(n/100%10)*100
                  +(n/1000%10)*10+(n/10000%10);

          printf("rev=%d",rev);
          
          return 0;
                                        
}

