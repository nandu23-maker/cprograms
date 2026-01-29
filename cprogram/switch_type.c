#include <stdio.h>

void display(char ch)
{
   int i;
    
      if(ch>='a' && ch<='z')
      {
          i=1;
      }
      else if(ch>='A' && ch<='Z')
      {
          i=2;
      }
      else
      {
          i=3;
      }
    
      switch(i)
      {
           case 1: printf("It is a lowercase");

                 break;

           case 2: printf("It is a uppercase");
              
                 break;

           case 3: printf("It is a special character");
       
                 break;
    
           default: printf("Invalid");
       }
         
 }        
int main()
{
  char ch;

       printf("Enter a character : ");
       scanf("%c",&ch);  
       
       printf(" ASCII value is %d\n",ch); 
       display(ch);
       
    return 0;
}
