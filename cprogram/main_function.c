#include <stdio.h>
#include "allfunction.c"

int main()
{
// function small_lett.c

    char xxarr[15]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n', 0}; 
    
    vowels(xxarr);
    int i=0;     
    while(xxarr[i]!='\0')
    {
                
       
         printf("%c\n", xxarr[i]);
      	   i++;
   }

//function upper.c(uppercase to lowercase)

 char st[50];
  
    printf("Enter a string: ");
    scanf("%s", st);
    
    uppercase(st);
   
    printf("%s\n", st);

//function copy_str.c(connect 2 string)

char a[]="Nandini";
     char b[]="Vaishnavi";
     
  
     str (a,b);

     printf("connected string:%s\n",a);


    return 0;

}

   

