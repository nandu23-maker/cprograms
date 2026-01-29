#include <stdio.h>

void swap(int a,int b)
{
     int temp;
  
        temp=a;
        a=b;
        b=temp;
}   
int main()
{
  int a=40,b=70;

   
     swap(a,b);

     printf("a=%d\nb=%d\n",a,b);
    
    return 0;
}
//in function when we pass the value they only send the copy of value,original value not get changed.
