#include <stdio.h>

int main()
{
    
int n=44;
           int binary[32], i=0; 
           int j=0;
           
          while(n>0)
          { 
                binary[i]=n%2;
                 n=n/2;
                 i++;
          }
          
          {
                printf("%d" , binary [j] );
          
          }
    return 0;
}
