#include <stdio.h>
int find_string(char a[],char b[])
{
    int i=0,j=0;
    
      while(a[i]!='\0')
      {
          j=0;
                 
             while(a[i+j]==b[j] && b[j]!='\0')
             {
                    j++;
             }
         
             if(b[j]=='\0')
             { 
                 return i;
             }
        i++;
      }
      return -1;
}
int main()
{
    char a[]="HelloWorld";
    char b[]="rld";
    
    int pos = find_string(a,b); 
        if(pos!=-1)
              printf("string found pos is %d",pos);
        else
              printf("string not found");     
  
   return 0;
}
