#include <stdio.h>

int swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a=40,b=70;
    
    
         printf("before swap value:\na=%d\nb=%d\n",a,b);  //before swap
       swap(&a,&b);
         printf("After swap value:\na=%d\nb=%d",a,b);    //after swap

    return 0;
}
