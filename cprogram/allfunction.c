#include <stdio.h>

//function from small_lett.c

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

//function from upper.c
 
void uppercase(char str[])
{
  int i=0;
   
  while(str[i]!='\0')
  {
       if(str[i]>='A' && str[i]<='Z')
       {
            str[i]=str[i]+32;
       }
       else
       {
           str[i]=str[i];
       } 
    i++;   
  }
}

//function from copy_str

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

//function from oct_decimal

int octaltodecimal(int octal)
{
    int decimal=0,base=1,reminder;
   
    while(octal>0)
   {
    reminder=octal%10;
    decimal=decimal+reminder*base;
    base=base*8;
    octal=octal/10;
   }
        return decimal;
} 

//function from cap_letter

void capletter(char a[])
{ 
   int i=0;

   while(a[i]!='\0')
   {
     a[i]=a[i]-32;
     i++;
   }
      return;
}

//function from sl_letter.c

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

//function from dec_octal.c
 
int dectooctal(int n)
{
   int octal=0 ,base=1;

     while(n>0)
    {
     octal=octal+(n%8)*base;
     n=n/8;
     base=base*10;
    }
       return octal;
}

// function from octal_binary

int octaltobinary(int octal)
{
   int decimal=0,base=1,reminder,binary=0;

   while(octal>0)
   {
    reminder=octal%10;
    decimal=decimal+reminder*base;
    base=base*8;
    octal=octal/10;
   }
  
   base=1;
   
   while(decimal>0)
   {
      binary=binary+(decimal%2)*base;
      decimal=decimal/2;
      base=base*10;
   }
     return binary;
}

//function from dec_binary

int decimaltobinary(int n)
     {
       int binary=0,base=1;
         
         while(n>0)
         {
            binary=binary+(n%2)*base;
            n=n/2;
            base=base*10;
         }
            return binary;
      }


