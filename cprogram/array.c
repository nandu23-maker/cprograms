#include <stdio.h>

int main()
{
	
    int array[5]={1,2,3,4,5};
    int i;
   
        for(i=0; i<sizeof(array)/sizeof(int); i++)
        {
            
              printf("\n%d\n",array[i]);

        }
        
	return 0;
}
