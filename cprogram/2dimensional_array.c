#include <stdio.h>

int main()
{
   int a[2][3]=
   {
       {1,2,3},{6,7,8}
   };
  
   int i,j;
  
   for(i=0;i<2;i++)     //outer loop for ROW
   {
       for(j=0;j<3;j++)      //for COLUMN
       {
            printf("%d",a[i][j]);
       }
     printf("\n");
    }

  // ---------------char------------------
    printf("\n--char--\n");

    char c[2][3]=
    {
         {'a','b','c'},{'d','e','f'}
    };
    
        
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
             printf("%c",c[i][j]);
        }
     printf("\n");
    }
 
  //------------------float------------------
    printf("\n--float--\n");

    float f[2][3]=
    {
          {1.1, 1.2, 1.3},{8.1, 7.2, 7.6}
    };
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
             printf(" %.1f",f[i][j]);
        }
     printf("\n");
   }
    
    return 0;
}
