#include <stdio.h>

int main()
{
   int i=10;
   int *p=&i;

   printf("value of p=%p\n",p);
   printf("value of &i=%p\n",&i);
   printf("value of i=%d\n",i);
   printf("value of &p=%p\n",&p);
   printf("value of *p=%p\n",*p);
    
    return 0;
}
