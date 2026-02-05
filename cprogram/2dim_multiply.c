#include <stdio.h>

int main()
{
  int A[2][2]=
  {
        {1,2},{3,6}
  };
  
  int B[2][2]=
  {
       {5,6},{4,5}
  };
 
  int C[2][2]={0};

  int i,j,k;

          for(i=0;i<2;i++)
          {
                for(j=0;j<2;j++)
                {
                    for(k=0;k<2;k++)
                    {
                          C[i][j]+= A[i][k] * B[k][j];
                    }
                }
          }

         for(i=0;i<2;i++)
         {
               for(j=0;j<2;j++)
               {
                      printf(" %d",C[i][j]);
               }
           printf("\n");
         }
    
    return 0;
}
