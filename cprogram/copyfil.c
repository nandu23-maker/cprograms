#include <stdio.h>

int main()
{
    FILE *fp,*fs;
    char ch;

    fp=fopen("file.txt","r");

       if(fp==NULL)
      {
          printf("Failed to open 1st file");
      }
   
    fs=fopen("file2.txt","w");

       if(fs==NULL)
      {
         printf("Failed to open 2nd file");
      }
   
    while((ch=getc(fp))  !=EOF)
    {
             putc(ch, fs);
             putc(ch, stdout);
                   
    }



    fclose(fp);
    fclose(fs);

    printf("sucessfully copy in file2.txt");

    return 0;
}
