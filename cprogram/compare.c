#include <stdio.h>
void compare (char a[],char b[])
{
    int i=0,len1=0,len2=0,match=0;
   
     while(a[len1]!=0)
     { 
         len1++;
     }
     
     while(b[len2]!=0)
     {
         len2++;
     } 
      
      int maxlen;
      if(len1<len2)
         maxlen=len1;
      else
         maxlen=len2; 
  
    

      i=0; 

      while(a[i]!='\0' && b[i]!='\0')
      {
               if(a[i]==b[i])
               {
                 match++;
               }      
        i++;
           
      }

              

    int accuracy=(match*100)/maxlen;

           if(accuracy==100)
           {
               printf("string is equal accuracy = %d%%", accuracy);
           }
           else if(accuracy>=60)
           {
               printf("string is similar accuracy = %d%%", accuracy);
           }
           else
           {
               printf("string is not equal accuracy = %d%%", accuracy);
           }    
  }                 
 int main()
{
     char a[50];
     char b[50];  
    printf("Enter a first string : ");
    scanf("%s", a);
    printf("Enter a second string:  ");
    scanf("%s", b);
        
        
    compare(a,b);
   
    return 0;
}
