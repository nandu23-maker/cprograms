#include <stdio.h>

int main()
{
   int A[2][2]=
   {
         {1,2},{8,9}
   };
   
   int B[2][2]=
   {
       {7,9},{8,9}
   };
   
   int C[2][2];
   int i,j;
   
   for(i=0;i<2;i++)
   {
       for (j=0;j<2;j++)
       {
           C[i][j]= A[i][j]+ B[i][j];
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
