#include <stdio.h>

int main()
{
   FILE *fp,*fs;
   char ch;
   
   fp=fopen("file.txt","r");

   if(fp==NULL)
   {
        printf("Failed to open a file");
   }
   
   fs=fopen("file2.txt","w");                   //temp file to make changes in file
   
   if(fs==NULL)
   {
        printf("Failed to open a file");
   }
   
   while((ch=getc(fp)) !=EOF)
   {
         if(ch>='a' && ch<='z')
         {
              ch=ch-32;
         }
     putc(ch,fs);
   }
  
   fclose(fp);
   fclose(fs);
   
   remove("file.txt");
   rename("file2.txt","file.txt");             //Rename the file
   
   printf("\nsucessfully convert lowercase into uppercase\n");
    
    return 0;
}
