#include <stdio.h>
int main()
{
           int n;
           int sum=0;
           
           printf("Enter a 5 digit number: ");
           scanf("%d" , &n);
           
  
          sum=(n % 10) + ( n/10 %10) + (n/100%10) + (n/1000%10) + (n/10000);

          printf("sum=%d",sum);
          
          return 0;
                                        
}
