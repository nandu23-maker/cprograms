#include <stdio.h>

void  str(char a[],char b [])
{
     int i=0,j=0;
     while(a[i]!='\0')
     {
         i++;
     }
     
     while(b[j]!='\0')
     {
         a[i]=b[j];
         i++;
         j++;
     }

       a[i]='\0';
       return;
}
int main()
{
     char a[]="Nandini";
     char b[]="Vaishnavi";
     
  
     str (a,b);

     printf("connected string:%s",a);
 
    
    return 0;
}
