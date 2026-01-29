#include <stdio.h>
int main() 
{ 
      	int i, j;
      	for (i=5;  i>=0; i++)//rows
     	{
      		for(j=i; j>=1; j++)
		{
            		printf("*");
		}
            	printf("*\n");
	}
      	return 0; 
}
