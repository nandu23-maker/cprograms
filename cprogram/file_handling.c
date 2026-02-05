#include <stdio.h>

int main()
{

    FILE *fp;
    char ch;

    fp=fopen("file.txt","r");
    if ( fp == NULL)
	printf("Failed to open file");

    while((ch=getc(fp)) != EOF)
    {
             putc(ch,stdout);

    }
 
     fclose(fp);
      
      
    return 0;
}
