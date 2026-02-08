#include <stdio.h>

int main(int argc,char *arv[])
{
  FILE *fs, *fd;
  char ch;

 
  fs=fopen(arv[2],"r");
     
     if(fs==NULL)
     {
           printf("failed to open source file");
     }
  
  fd=fopen(arv[3],"w");
   
      if(fd==NULL)
      {
           printf("failed to open destination file");
      }

   while((ch=getc(fs)) !=EOF)
   {
         putc(ch,fd);
   }
 
   fclose(fs);
   fclose(fd);
   
   printf("Sucessfully copy file");
    
    return 0;
}
