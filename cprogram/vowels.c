#include <stdio.h>

void vowels(char str[])
{
  int i=0;
  
  while(str[i]!='\0')
  {
        if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
        {
                             
            if(str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U'&&
            str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
            {
                          
                         printf("%c",str[i]);
            }
          
         }
    i++;
  }
}
 int main()
{
     char str[50];
     
           printf("Enter a string: ");
           scanf("%s",str);
                     
           printf("consonants: ");
           vowels(str);
           
           

    return 0;
}
