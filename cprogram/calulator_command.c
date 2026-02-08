#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a,b;
  char op;
   
  a=atoi(argv[1]);
  b=atoi(argv[3]); 
  op=argv[2][0];
 
    switch(op)
  {
     
       case '+': printf("Result:%d\n",a+b);
                 break;
     
       case '-': printf("Result:%d\n",a-b);
                 break;
  
       case '*': printf("Result:%d\n",a*b);
                 break;
   
       case '/' : if(b==0)
                  {
                      printf("b value not be 0");
                      
                  }
                  else
                  {
                  printf("Result:%d\n",a/b);
                  }
                  break;
       
       default:   printf("Invalid operator");
  
   } 
    return 0;
}
