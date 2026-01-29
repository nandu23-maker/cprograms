#include <stdio.h>

void vowels(char arr[])
{
    int i=0,j=0;
    
    
  while(arr[i]!='\0')
  {
                
              if(arr[i]!='a' && arr[i]!='e' && arr[i]!='i' && arr[i]!='o' && arr[i]!='u')
              {
                  arr[j]=arr[i];
                  j++;
                                    
              }
       
   i++;
  }
     arr[j]='\0';
   
}
int main()
{
    char xxarr[15]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n', 0}; 
    
    vowels(xxarr);
    int i=0;     
    while(xxarr[i]!='\0')
    {
                
       
		printf("%c", xxarr[i]);
      	        i++;
   }
       
    return 0;
}
