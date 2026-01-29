#include <stdio.h>

struct student 
{
    int no;
    char name[50];
    int rollno; 

 };

int main()
{
        struct student s1={1,"Nandini",34};
        struct student s2={2,"Khushi",45};
        struct student s3={3,"manjiri",67};
        
        printf("%d  %s  %d\n",s1.no , s1.name ,s1.rollno);
        printf("%d  %s  %d\n",s2.no , s2.name ,s2.rollno);
        printf("%d  %s  %d\n",s3.no , s3.name ,s3.rollno);
        
          
    return 0;
}
