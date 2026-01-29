i#include <stdio.h>

struct emp
{
  int a;
  float b;
  char ch;
  
  
};

int main()
{
   struct emp e;

     e.a=7890;
     e.b=5;
     e.ch='n';
     
     

    scanf("%d",&e.a);
    printf("%d\n",e.a);
    printf("%f\n",e.b);
    printf("%c\n",e.ch);
    printf("%d\n",sizeof(e));
    
         
    return 0;
}
