#include <stdio.h>

int main()
{
     int a,b;
     char op;

         printf("Enter a first number :");
         scanf("%d", &a);
         
         printf("Enter a second number : ");
         scanf("%d", &b);
    
         printf("Enter a operator(+,-,*,/): ");
         scanf(" %c", &op);
        
         switch(op)
         {
      
             case '+': printf("Result = %d", a+b);
                      
                       break;

             case '-': printf("Result = %d", a-b);
                     
                       break;
             
             case '*': printf("Result = %d", a*b);

                       break;

             case '/': if(a>b) 
                         printf("Result = %d", a/b);
                       else
                         printf("not valid");
                     
                       break;

             default: printf("Invalid");
        }


      
        
    
    return 0;
}
