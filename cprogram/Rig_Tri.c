#include <stdio.h>
int main() 
{ 
      int i, j,n=5;
                for(i=1;i<=n;i++)
                {
                              for (j=0;j<=n-1;j++)
                              {
                               printf("   ");
                               }
                               for(j=0;j<=i;j++)
                               {
                                       if(i==n|| j==0 || j==i)
                                                printf("*");
                                       else
                                                printf("  ");
                                }
                                printf("\n");
                       
                  }
return 0; 
}
