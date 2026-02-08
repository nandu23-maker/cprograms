#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *f1, *f2, *fd;
  char ch;

  f1=fopen(argv[2],"r");

      if(f1==NULL)
      {
            printf("Failed to open 1st file");
      }
  
  f2=fopen(argv[3],"r");
     
     if(f2==NULL)
     {
          printf("Failed to open 2nd file");
     }
  
  fd=fopen(argv[4],"w");

     if(fd==NULL)
     {
          printf("failed to open result file");
     }

  while((ch=getc(f1)) !=EOF)   ----//file 1 copy in result file
  {
       putc(ch,fd);
  }
  
  while((ch=getc(f2)) !=EOF)   ----//file 2 copy in result file
  {
       putc(ch,fd);
  }
  
  fclose(f1);
  fclose(f2);
  fclose(fd);

     printf("sucessfully conacat");
    
    return 0;
}
