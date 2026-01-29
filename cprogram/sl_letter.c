include <stdio.h>

void sl_letter(char a[])
{
  int i=0;

  while(a[i]!='\0')
  {
  
    a[i]=a[i]+32;
    i++;
  }
   return;
}
int main()
{
   char a[]="NANDINI";
   
   sl_letter(a);
   
   printf("%s",a);
    
    return 0;
}
