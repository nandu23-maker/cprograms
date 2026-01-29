#include <stdio.h>

int main()
{
  float array[5]={1.1,1.2,1.3,1.4,1.5};
  int i;

    for(i=0;i<sizeof(array)/sizeof(float) ;i++)
    {
             printf("\n%f\n",array[i]);
    }
    
    return 0;
}
