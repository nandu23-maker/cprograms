#include <stdio.h>

void vowels(char str[])
{
  int i=0;

  while(str[i]!='\0')
  {
        
        if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
        {

           switch(str[i])
           {
               case 'a': case 'e': case 'i': case 'o': case 'u':
               case 'A': case 'E': case 'I': case 'O': case 'U':  
               
                 break;

               default : printf("%c",str[i]);
           }
        }
     i++;
  }
}
int main()
{
   char str[50];
    
      printf("Enter a string: ");
      scanf("%s", str);

      printf("conconants: ");
      vowels(str);

    return 0;
}
