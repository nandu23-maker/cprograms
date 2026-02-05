#include <stdio.h>

int main()
{
  FILE *fp, *fs;
  char ch;

  fp=fopen("file.txt","a");    //add 2nd file content at the end of 1st file
  
  if(fp==NULL)
  {
      printf("Failed to open a file");
  }
  
  fs=fopen("file3.txt","r");
  
  if(fs==NULL)
  {
       printf("failed to open a file");
  }
 
  while((ch=getc(fs))  !=EOF)
  {
       putc(ch,fp);
  }
  
  fclose(fp);
  fclose(fs);
  printf("\nSucessfully done\n");
    
    return 0;
}
